#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main ()

{    
    system("color 1f");

    int c;

    cout<<"\n\n\n\t\t\t_________________________________________________________________\n\n\n";
    cout<<"\t\t\t              |____Welcome Wo Wogin Page____|                    \n\n\n";
    cout<<"\t\t\t                       ----MENU----                           \n\n";
    cout<<"                                                                    \n\n";
    cout<<"\t |  Press 1 to Login |"<<endl;
    cout<<"\t |  Press 2 to Registration |"<<endl;
    cout<<"\t |  Press 3 to Forgot Password |"<<endl;
    cout<<"\t |  Press 4 to Exit |"<<endl;
    cout<<"\n\n\n\t\t\t Please Enter Your Choice Here : ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
             login();
             break;
        case 2:
             registration();
             break;
         case 3:
             forgot();
             break;  
         case 4:
             cout<<"\n\n\n\t\t\t |_|_|_|_|_|-----------THANK YOU-----------|_|_|_|_|_| \n\n";
             break;
          default:
              system("cls");
              cout<<"\t\t\t Please select from the options given above \n"<<endl;
                  main() ;        
    }

   return 0;

}

void login()
{
    int count;
    string userid, password, id, pass;
    system("cls");
    cout<<"\n\n\t\t\t Please Enter Your Username and Password Below"<<endl;
    cout<<"\n\t\t\t Username : ";
    cin>>userid;
    cout<<"\n\t\t\t Password : ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass)
    {
        if (id==userid && pass==password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();

    
    if(count==1)
    {
        cout<<userid<<"\n\n Your Login is Succesfull \n\n Thanks for Loging In \n";
        main();
    }
    else {
        cout<<"\nLogin Error \n Please Check Your Username and Password";
        main();
    }
}

void registration()
{
    string ruserid, rpassword, rid, rpass;
    system("cls");
    cout<<"\n\n\n\t\t\t Enter Your Username Here : ";
    cin>>ruserid;
    cout<<"\n\t\t\t Enter the Password Here : ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserid<<' '<<rpassword<<endl;
    system("cls");

    cout<<"\n\n\t\t\t Your Registration is successfull \n";
    main();

}

void forgot()
{
    int option;
    system("cls");
    cout<<"\n\n\n\t\t\t You Forget Your Password? No Worries \n";
    cout<<"\n| Press 1 to Search Your Id by Your Username |"<<endl;
    cout<<"\n| Press 2 to go Back to the Main Menu |"<<endl;
    cout<<"\n\n\n\t\t\t Enter Your Choice : ";
    cin>>option;

    switch (option)
    {

        case 1:
        {
            int count=0;

            string suserid, sid, spass;
            cout<<"\n\t\t\t Enter Your Username : ";
            cin>>suserid;

            ifstream f2("records.txt");
            while(f2>>sid>>spass)
            {
                if(sid==suserid)
                {
                    count=1;
                }
            }
            f2.close();
            if(count==1)
            {
                cout<<"\n\n Your Account is Found \n";
                cout<<"\n\n Your Password is : "<<spass;
                main();

            }
            else{
                cout<<"Sorry Your Account is Not Found";
                main();

            }
        } break;

        case 2:

        {
            main();
        }

        
        default:
        cout<<"\t\t\t Wrong Choice Please Yry Again";
        main();


    }
}