// Maham_Imran_22i-2733_A1
// bonus task
#include<iostream>
using namespace std;
int strlength(string s, int counter)
{
    // recursive function to find length of string
    if(s[counter]!='\0') counter = strlength(s,counter+1);
    return counter;
}
void start_hangman(string fruit,int length,int wrongguesses,bool found,string empty)
{
    // checking if empty string is full
    bool won=true;
    for (int i=0;i<length;i++)
    {
        if(empty[i]=='_')
        {
            won=false;
            break;
        }
    }
    // terminates game when 4 guesses are made
    if(wrongguesses>=4||won==true)
    {
        if(wrongguesses>=4)
        {
            cout<<"lol looser"<<endl;
            cout<<"the word was: "<<fruit<<endl;
        }
        if(won==true)
        {
            cout<<fruit<<endl;
            cout<<"congrats! you win"<<endl;
        }
        return;
    }
    char guessedchar;
    // displaying dashes
    for(int i=0;i<length;i++)
    {
        cout<<empty[i];
    }
    cout<<endl;
    // user input
    cout<<"guess a letter: "<<endl;
    cin>>guessedchar;
    guessedchar = tolower(guessedchar);
    found = false;
    for(int i=0;i<length;i++)
    {
        // make a new function for this
        if(fruit[i]==guessedchar)
        {
            found=true;
            //cout<<"CORRECT!"<<endl;
            empty[i] = guessedchar;
        }
    }
    // if letter guessed wrong
    if(found == false)
    {
        wrongguesses++;
        cout<<"number of wrong guesses: "<<wrongguesses<<endl;
    }
    start_hangman(fruit, length, wrongguesses,found,empty);
   
  
}
int main()
{
    // seeding random function
    srand(int(time(NULL)));
    string fruits[] = {"apple", "banana", "apricot","blueberry", "cranberry", "cherry", "dragonfruit", "dates", "orange", "coconut"};
    // randomly choosing fruit
    int randfruit = rand()%10;
    string empty = "";
    // making a new string with '_'
    for(int i=0;i<strlength(fruits[randfruit],0);i++)
        empty += "_";
    // calling function with the random fruit, length of the randomly generated fruit, wrong guesses initial count, found boolean, empty string
    cout<<"<<<HANGMAN>>>"<<endl;
    start_hangman(fruits[randfruit],strlength(fruits[randfruit],0),0,false,empty);
}
