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
class Details
{
    public:
        
        static string name,gender;
        int phoneNo;
        int age;
        string address;
        static int cId;
        char arr[100];
        void information
        {
            cout<<"\n Enter the Customer ID: ";
            cin>>cId;
            cout<<"\n Enter the Customer Name: ";
            cin>>name;
            cout<<:"\n Enter the age: ";
            cin>>age;
            cout<<"\n Address: ";
            cin>>add;
            cout<<"\n Gender";
            cin>>gender;
            cout<<"your details are saved with us";
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string  flightN[]={ "Dubai","canada","London","uk","USA",};
        for(int a=0;a<6;a++)
        {
            cout<<a+1<<flightN[a]<<endl;
        }
        cout<<"\n Welcone to the fly India Airlines: "<<endl;
        cout<<"press the number of the country you want to travel to: "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"________________Welcome to Dubai Emirates________________\n"<<endl;

                cout<<"Your comfort is our priority"<<endl;
                cout<<"following are the flights \n "<<endl;

                cout<<"1.Dub - 498"<<endl;
                cout<<"\t08-01-2023 8:00AM 10hrs Rs. 14000"<<endl;
                cout<<"1.Dub - 458"<<endl;
                cout<<"\t09-01-2023 4:00AM 11hrs Rs. 10000"<<endl;
                cout<<"1.Dub - 698"<<endl;
                cout<<"\t11-01-2023 8:00AM 12hrs Rs. 9000"<<endl;

                cout<<"\n Select the flight you want to travel: "<<endl;
                cin>>choice1;
                if(choice1==1)
                {
                    charges=14000;
                    cout<<"\nYou have successfully booked your flight DUB - 498"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;

}
else if(choice1==2)
{
    charges=10000;
                    cout<<"\nYou have successfully booked your flight DUB - 458"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;

        }
        else if(choice1==3)
        {
      charges=9000;
                    cout<<"\nYou have successfully booked your flight DUB - 698"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;
        
         }
         else
         {
                cout<<"Invalid input , shifting to yhe prevoius menu"<<endl;
                flights();
         }
         cout<<"Press any key to go back to main menu"<<endl;
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            }
            case 2:
            {
                cout<<"________________Welcome to Canadaian Airlines________________\n"<<endl;

                cout<<"Your comfort is our priority"<<endl;
                cout<<"following are the flights \n "<<endl;

                cout<<"1.CA - 198"<<endl;
                cout<<"\t08-01-2023 2:00PM 10hrs Rs. 34000"<<endl;
                cout<<"1.CA - 158"<<endl;
                cout<<"\t011-01-2023 4:00AM 17hrs Rs. 29000"<<endl;
                cout<<"1.CA - 208"<<endl;
                cout<<"\t14-01-2023 8:00AM 20hrs Rs. 40000"<<endl;

                cout<<"\n Select the flight you want to travel: "<<endl;
                cin>>choice1;
                if(choice1==1)
                {
                    charges=34000;
                    cout<<"\nYou have successfully booked your flight Can - 498"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;
            }
            else if(choice1==2)
{
    charges=29000;
                    cout<<"\nYou have successfully booked your flight CA - 158"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;

        }
        else if(choice1==3)
        {
      charges=40000;
                    cout<<"\nYou have successfully booked your flight CA - 208"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;
        
         }
         else
         {
                cout<<"Invalid input , shifting to yhe prevoius menu"<<endl;
                flights();
         }
         cout<<"Press any key to go back to main menu"<<endl;
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            }

case 3:
            {
                cout<<"________________Welcome to UK Aitways________________\n"<<endl;

                cout<<"Your comfort is our priority"<<endl;
                cout<<"following are the flights \n "<<endl;

                cout<<"1.UK - 798"<<endl;
                cout<<"\t12-01-2023 8:00AM 12hrs Rs. 44000"<<endl;
               

                cout<<"\n Select the flight you want to travel: "<<endl;
                cin>>choice1;
                if(choice1==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked your flight UK - 798"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;

}

         else
         {
                cout<<"Invalid input , shifting to yhe prevoius menu"<<endl;
                flights();
         }
         cout<<"Press any key to go back to main menu"<<endl;
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            }
            case 4:
            {
                cout<<"________________Welcome to US Airways________________\n"<<endl;

                cout<<"Your comfort is our priority"<<endl;
                cout<<"following are the flights \n "<<endl;

                cout<<"1.US - 567"<<endl;
                cout<<"\t10-01-2023 8:00AM 10hrs Rs. 37000"<<endl;
                cout<<"1.US - 458"<<endl;
                cout<<"\t09-01-2023 4:00AM 11hrs Rs. 10000"<<endl;
                cout<<"1.US - 698"<<endl;
                cout<<"\t11-01-2023 8:00AM 12hrs Rs. 80000"<<endl;

                cout<<"\n Select the flight you want to travel: "<<endl;
                cin>>choice1;
                if(choice1==1)
                {
                    charges=37000;
                    cout<<"\nYou have successfully booked your flight US - 567"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;

}
else if(choice1==2)
{
    charges=10000;
                    cout<<"\nYou have successfully booked your flight US - 458"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;

        }
        else if(choice1==3)
        {
      charges=80000;
                    cout<<"\nYou have successfully booked your flight US - 698"<<endl;
                    cout<<"You can go to back to menu and take your ticket"<<endl;
        
         }
         else
         {
                cout<<"Invalid input , shifting to yhe prevoius menu"<<endl;
                flights();
         }
         cout<<"Press any key to go back to main menu"<<endl;
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            }
default:
            {
                cout<<"Invalid input , shifting to the prevoius menu"<<endl;
                mainMenu();
                break;
            }
        }
    }
    };
    float registration::charges;
    int regsitration::choice;

    class ticket : public registration,Details
    {
public:
void Bill()
{
    srting destination=" ";
    ofstream outf("record.txt");
    {
        outf<<"______________________FLY INDIA AIRLINES______________________"<<endl;
        outf<<"______________________TICKET AND CHARGES______________________"<<endl;
        outf<<"___________________________________"<<endl;

        outf<<"Customer ID: "<<Details::cId<<endl;
        outf<<"Customer Name: "<<Details::name<<endl;
         outf<<"Customer Gender: "<<Details::gender<<endl;
         outf<<"\tDescription"<<endl
        


    }
    }


void mainMenu()
{
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
        cout<<"________________Customer________________\n"<<endl;
        d.information();
        cout<<"Press any key to go back to main menu"<<endl;
        cin>>back;

        if(back==1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;

    }
    case 2: //for flight registration
    {
        cout<<"________________Book a flight using this system________________\n"<<endl;
        r.flights(); // r is nmae of object and flight is a function
         break;

    }
case 3: //for ticket and collection
{
cout<<"________________GET YOUR TICKET________________\n"<<endl;
t.bill();
cout<<"Your tickey is printed, you can colect it \n"<<endl;
cout<<"press 1 to display your ticket";

cin>>back;

if(back==1)
{
    t.display();
    cout<<"Press any key to go back to main menu";
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else
    {
        mainMenu();
    }
}
    else
    {
        mainMenu();
    }
    break;
}
}
case 4: //for exit
{
    cout<<"Thank you for using our system"<<endl;
    break;
}
default:
{
    cout<<"Invalid choice please try agaain"<<endl;
    mainMenu();
    break;
}


    }
int main() {
    Management Mob;
    return 0;
}