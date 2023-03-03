// Maham_Imran_22i-2733_A1
// Q2
#include<iostream>
using namespace std;
// prototype functions
int lift_operating_system(int,int,char);
int liftup(int,int);
int liftdown(int,int);
char halt_lift(char);
char un_halt_lift(char);


int lift_operating_system(int requested_floor, int current_floor, char lift_status)
{
    if(requested_floor>4 || requested_floor<-1 || lift_status == 'H')
        cout<<"cannot perform action, make sure lift is unhaulted and your floor of choice is within -1 and 4."<<endl;
    
    else{
        
        cout<<"current floor: "<<current_floor<<endl;
        
        
        if(requested_floor == current_floor)
            cout<<"you are already on this floor"<<endl;
        
        else if(requested_floor>current_floor && lift_status == 'W')
        {
            cout<<"going up..."<<endl;
            current_floor = liftup(current_floor, requested_floor);
        }
        
        else if(requested_floor<current_floor && lift_status == 'W')
        {
            cout<<"going down..."<<endl;
            current_floor = liftdown(current_floor, requested_floor);
        }
        
       
    }
    return current_floor;
}
int liftup(int current_floor,int requested_floor)
{
    if(current_floor!=requested_floor)
    {
        cout<<"moved to floor: "<<current_floor+1<<endl;
        current_floor = liftup(current_floor+1, requested_floor);
    }
    return current_floor;
}
int liftdown(int current_floor,int requested_floor)
{
    if(current_floor!=requested_floor)
    {
        cout<<"moved to floor: "<<current_floor-1<<endl;
        current_floor = liftdown(current_floor-1, requested_floor);
    }
    return current_floor;
}
char halt_lift(char status)
{
    status = 'H';
    return status;
}
char un_halt_lift(char status)
{
    status = 'W';
    return status;
}
int main()
{
    //int total_floors = 6;   // total number of floors
    int current_floor = -1; // starts with basement
    int requested_service = 0;  // choice of user
    int requested_floor;    // floor the lift goes on
    char status = 'W';      // W for working , H for halted
    bool exit = false;
    while(!exit)
    {
        cout<<"What action would you like to perform?"<<endl;;
        cout<<"1. Go to a specific floor"<<endl;
        cout<<"2. Halt Lift"<<endl;
        cout<<"3. Unhalt Lift"<<endl;
        cout<<"4. Exit"<<endl;
        cin >> requested_service;
        switch(requested_service)
        {
            case 1:
            {
                cout<<"Enter Floor of choice: ";
                cin>>requested_floor;
                current_floor = lift_operating_system(requested_floor,current_floor,status);
                break;
            }
            case 2:
            {
                status = halt_lift(status);
                break;
            }
            case 3:
            {
                status = un_halt_lift(status);
                break;
            }
            case 4:
            {
                cout<<"exiting"<<endl;
                exit = true;
                break;
            }
            default:
            {
                cout<<"invalid entry. enter either 1, 2, 3 or 4."<<endl;
            }
        }
    }
}

