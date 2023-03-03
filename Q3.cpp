// Maham_Imran_22i-2733_A1
// Q3
#include<iostream>
using namespace std;
void stars(int n)
{
    if(n == 0)return; // terminating condition
    cout<<"*";
    stars(n-1); // recursion
}
void spaces(int space)
{
    if(space == 0)return; // terminating condition
    cout<<" ";
    spaces(space-1); // recursion
}
void printDiamondTop(int n, int space) {
    if (n == 0)return; // terminating condition

    cout << endl;
    stars(n);
    spaces(space);
    stars(n);
    if(n>2)printDiamondTop(n-1, space+2); // recursion
}
void printDiamondBottom(int n, int space, int i) {

    stars(i);
    spaces(space);
    stars(i);
    cout << endl;
    if (i==n)return; // terminating condition
    if(n>i)printDiamondBottom(n, space-2,i+1);
}
void printDiamond(int n)//define arrguments
{
    int space = 0;
    printDiamondTop(n, space);
    printDiamondBottom(n,n*2,space);
    cout<<endl;
}
int main()
{
    int n;
    cout << "Enter Number of star: ";
    cin >> n;
    printDiamond(n);
}
