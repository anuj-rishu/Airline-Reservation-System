#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();
class Management
{
    public:
        Management()
        {
            mainMenu();

        }
       
};
// above this all codes are correct
class Details
{
    public:
        
        static string name,gender;
        int phoneNo;
        int age;
        string address;
        static int cId;
        char arr[100];
        void information()
        {
            cout<<"\n Enter the Customer ID: ";
            cin>>cId;
            cout<<"\n Enter the Customer Name(first name only): ";
            cin>>name;
            cout<<"\n Enter the age: ";
            cin>>age;
            cout<<"\n Address: ";
            cin>>address;
            cout<<"\n Gender: ";
            cin>>gender;

            cout<<"YOUR DETAILS ARE SAVE WITH US "<<endl;
        }
};
//above codes are correct do not change
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
            string  flightN[]={ "Dubai","canada","uk","USA",};

            for(int a=0;a<4;a++)
            {
                cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
            }
            cout<<"\n Welcone to the Airlines Booking System: "<<endl;
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
                        cout<<"2.Dub - 458"<<endl;
                        cout<<"\t09-01-2023 4:00AM 11hrs Rs. 10000"<<endl;
                        cout<<"3.Dub - 698"<<endl;
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

                        cout<<"\nPress 1 to go back to main menu"<<endl;
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
                    cout<<"2.CA - 158"<<endl;
                    cout<<"\t011-01-2023 4:00AM 17hrs Rs. 29000"<<endl;
                    cout<<"3.CA - 208"<<endl;
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
                    cout<<"\nPress 1 to go back to main menu"<<endl;
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
                    cout<<"\nPress 1 to go back to main menu"<<endl;
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
                    cout<<"2.US - 458"<<endl;
                    cout<<"\t09-01-2023 4:00AM 11hrs Rs. 10000"<<endl;
                    cout<<"3.US - 698"<<endl;
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
                    cout<<"\nPress 1 to go back to main menu"<<endl;
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
int registration::choice;
// above codes are correct do not change them
class ticket : public registration, Details
{
    public:
        void Bill()
        {
            string destination="";
            ofstream outf("ticketDetails.pdf");
            {
                outf<<"______________________ Airlines Booking System_______ _________"<<endl;
                outf<<"______________________TICKET___________________________________"<<endl;
                outf<<"______________________________________________________________"<<endl;

                outf<<"Customer ID: "<<Details::cId<<endl;
                outf<<"Customer Name(first name only): "<<Details::name<<endl;
                outf<<"Customer Gender: "<<Details::gender<<endl;
                outf<<"\tDescription"<<endl;
                
                if(registration::choice==1)
                {
                    destination="Dubai";
                }
                else if(registration::choice==2)
                {
                    destination="Canada";
                }
                else if(registration::choice==3)
                {
                    destination="UK";
                }
                else if(registration::choice==4)
                {
                    destination="USA";
                }

                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost : \t\t"<<registration::charges<<endl;

            }
            outf.close();
        }
        void dispBill()
        {
            ifstream ifs("ticketDetails.pdf"); //ifstream is used to read the file
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;

                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};
// above codes are correct do not change them
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t WELCOME TO Airlines Booking System\n"<<endl;
    cout<<"\t _______________________MAIN MENU________________________"<<endl;

    cout<<"\t _______________________________________________________"<<endl;
    cout<<"\t|\t \t\t\t\t\t\t| "<<endl;
    //create a structure whuch will ask the to prees a particular buttion to open a particular functionality

    cout<<"\t|\t Press 1 to add the customer Details    \t|"<<endl;
    cout<<"\t|\t Press 2 to for flight registration     \t|"<<endl;
    cout<<"\t|\t Press 3 to Ticket and charges          \t|"<<endl;
    cout<<"\t|\t Press 4 to  Exit                       \t|"<<endl;
    cout<<"\t|\t \t\t\t\t\t\t| "<<endl;
    cout<<"\t________________________________________________________"<<endl;

    cout<<"\t Enter your choice: ";
    cin>>lchoice;

    Details d; //object of class Details
    registration r; //object of class registration
    ticket t;//object of class ticket

    switch(lchoice)
    {
        case 1: //for customer details
            {
                cout<<"________________Customer________________\n"<<endl;
                d.information(); //used to get the customer details
                cout<<"\nPress 1 to go back to main menu"<<endl;
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
                t.Bill();
                cout<<"Your tickey is printed, you can colect it \n"<<endl;
                cout<<"press 1 to display your ticket";

                cin>>back;

                    if(back==1)
                    {
                        t.dispBill(); //  used to display the ticket
                        cout<<"\nPress 1 to go back to main menu";
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
        
            case 4: //for exit
                {
                    cout<<"Thank you for using our system"<<endl;
                    break;
                }
                default : //used to check the input is valid or not
                    {
                        cout<<"Invalid choice please try agaain"<<endl;
                        mainMenu();
                        break;
                    }
    }

}

int main() 
{
    Management Mobj;
    return 0;
}
//all program is correct do not change it
// written by: 1. ANUJ TIWARI (RA22110310052)
//             2. AYAAN RAJAK (RA22110310054)
