// Maham_Imran_22i-2733_A1
// Q4
#include<iostream>
using namespace std;
struct arrayUnion{
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[5] = {1,2,3,4,5};
    int *ResultUnionArr;
    int n=15;

    void input()
    {
        // taking input for both arrays
        for(int i=0;i<10;i++)
        {
            cout<<"enter value "<<i+1<<" of set 1: ";
            cin>>arr1[i];
        }
        cout<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"enter value "<<i+1<<" of set 2: ";
            cin>>arr2[i];
        }
    }
    void find_union()
    {
        // dynamically allocating array of max size 15
        ResultUnionArr = new int[15];
        
        // puts all 15 elements in new array
        for(int i=0;i<10;i++)
        {
            ResultUnionArr[i] = arr1[i];
            for(int j=10;j<15;j++)
            {
               ResultUnionArr[j] = arr2[j-10];
            }
        }
        // finding and removing common elements in new array
         for (int i=0;i<n;i++)
         {
           for (int j=i+1;j<n;j++)
           {
             if (ResultUnionArr[j]==ResultUnionArr[i])
             {
               // shifting elements to left
               for (int k=j;k<n;k++)
                   ResultUnionArr[k] = ResultUnionArr[k+1];
                 j-=1; // index updated after left shift
                 n-=1; // size of array updated
             }
           }
         }
    }
    void printresult()
    {
        cout<<"set 1: {";
        for(int i=0;i<10;i++)
        {
            if(i==9)cout<<arr1[i];
            else cout<<arr1[i]<<", ";
        }
        cout<<"}";
        cout<<endl;
        cout<<"set 2: {";
        for(int i=0;i<5;i++)
        {
            if(i==4)cout<<arr2[i];
            
            else cout<<arr2[i]<<", ";
        }
        cout<<"}"<<endl;
        cout<<"union: {";
        for(int i=0;i<n;i++)
        {
            if(i==n-1)cout<<ResultUnionArr[i];
            
            else cout<<ResultUnionArr[i]<<", ";
        }
        cout<<"}"<<endl;
        //print array with union
        delete[] ResultUnionArr;
    }
};


int main()
{
    arrayUnion u;
    u.input();
    u.find_union();
    u.printresult();
}
