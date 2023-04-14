#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();
class Management
{
    public:
        Management();
        {
            main menu();

        }
       
};
void mainMenu(){
    int lchoice;
int schoice;
int back;
cout<<"\t WELL COME TO FLY INDIA AIRLINES\n"<<endl;
cout<<"\t _____________MAIN MENU____________"<<endl;

cout<<"\t________________________________"<<endl;
cout<<"\t |\t \t\t\t| "<<endl;
//create a structure whuch will ask the to prees a particular buttion to open a particular functionality

cout<<"\t|\t Press 1 to add the customer Details    \t|"<<endl;
cout<<"\t|\t Press 2 to for flight registration     \t|"<<endl;
cout<<"\t|\t Press 3 to Ticket and charges          \t|"<<endl;
cout<<"\t|\t Press 4 to  Exist                      \t|"<<endl;
cout<<"\t |\t \t\t\t| "<<endl;
cout<<"\t________________________________"<<endl;

cout<<"\t Enter your choice: ";
cin>>lchoice;

Details d;
registration r;
ticket t;
switch(lchoice)
{
    case 1: //for customer details
    {
        cout<<"________________Customer________________"<<endl;
        d.information()
        cout<<"Press any key to go back to main menu"<<endl;
        cin>>back;
        if(back==1)
        {
            mainMenu();
        }
        else
        {
            mainManu();
        }
        break;

    }
    case 2: //for flight registration
    {
        cout<<"________________Book a flight using this system________________\n"<<endl;
        r.flight() // r is nmae of object and flight is a function
break;

    }

int main() {
    Management Mob;
    return 0;
}