// Maham_Imran_22i-2733_A1
// Q1
#include<iostream>
using namespace std;
int find_Length(string s, int counter)
{
    // checks if the string has ended or not, if not counter is incremented + the function calls itself again with updated value
    if(s[counter]!='\0') counter = find_Length(s,counter+1);
    return counter;
}

struct String_Manipulation {
    int Calculate_length(string s)
    {
        // calls the recursive function starting from index 0
        int length = find_Length(s, 0);
        return length;
    }
    bool substring (string main, string str)
    {
        bool status = 0;
        int mainlen = Calculate_length(main);
        int strlen = Calculate_length(str);
        for(int i=0;i<mainlen-strlen+1;i++)
        // maximum mainlen-strlen starting positions for str in main
        //(+1 for last iteration)
        {
            if(main[i]==str[0])
            // if first letter matches, it checks the letters ahead
            {
                status = true;
                for(int j=0;j<strlen;j++)
                {
                    if(main[i+j]!=str[j])
                        status = false;
                }
            }
        }
        return status;
    }
    int substring_position (string main, string str)
    {
        int index = -1;
        int mainlen = Calculate_length(main);
        int strlen = Calculate_length(str);
        for(int i=0;i<mainlen-strlen+1;i++)
        // maximum mainlen-strlen starting positions for str in main
        //(+1 for last iteration)
        {
            if(main[i]==str[0])
            // if first letter matches, it checks the letters ahead
            {
                index = i;
                for(int j=0;j<strlen;j++)
                {
                    if(main[i+j]!=str[j])
                        index = -1;
                }
            }
        }
        return index;
    }
};
int main()
{
    String_Manipulation s1;
    cout<< s1.Calculate_length("hatemylife")<<endl; // outputs 10
    cout<< s1.substring("hatemylife", "myli")<<endl; // outputs true
    cout<< s1.substring("hatemylife", "no")<<endl; // outputs false
    cout<< s1.substring_position("hatemylife", "temy")<<endl; // outputs 2
    cout<< s1.substring_position("hatemylife", "no")<<endl; // outputs -1
    
}

