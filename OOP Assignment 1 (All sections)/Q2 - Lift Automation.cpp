/*
FAST university has hired you to make an operating system for their lifts. Below are specifications of the lifts OS.
The lift will be place in a building with 6 floors including a basement. 
From basement to top floors are labeled as -1,0,1,2,3,4 respectively. 
In the morning, the lift goes operation from the basement. The lift can go up and down. 
If maintained is required, the lift can be halted. If the lift is halted, the lift not usable during that period. 
Once unhalted, the lift can be used again.
With the help of above information, make a lift operating system 
*/

#include<iostream>
using namespace std;
int lift_operating_system(int requested_floor, int current_floor, char lift_status)
{
	//all lift related logic will be written in this bloack along with validation. In this funcation, decide
	//if the lift goes up or down
}
int liftup(int current_floor,int requested_floor )
{
	//recurrsive funcation to take lift up
}
int liftdown(int current_floor,int requested_floor )
{
	//recurrsive funcation to bring the lift down
}
char halt_lift(char status)
{
	//halts the lift, no up and down operation can be performed. Stored H for halting

}
char un_halt_lift(char status)
{
	//Unhatls the lift. Store W which represents that the lift is working

}
main()
{
	int total_floors = 6; // total number of floors
	int current_floor = -1; // starts with basement
	int requested_service; //choice of user
	int requested_floor; //floor the lift goes on
	char status= 'W'; //W for working , H for halted
	while(1)
	{
		cout<<"Please select a funcation of your choice";
		cout<< endl << "1. Go to a specific floor";
		cout<< endl << "2. Halt Lift";
		cout<< endl << "3. Unhalt Lift";
		cout<< endl << "4. Exit";

		cin >> requested_service;
		switch(requested_service)
		case 1:
			{
				cout << endl << "Enter Floor of choice ";
				cin >> requested_floor;
				lift_operating _system();//arguments 
				//your code here
			}
		
		//
	}
}
