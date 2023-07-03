#include<bits/stdc++.h>
#include <cstdlib>

using namespace std;
void againfrontpage();
void frontpage1();
void frontpage2();
void signup();
void login();
void back_to_login();
void back_again_login1();
void cse();
void step0();
void step1();
void cse1();
void cse2();
void ts();
void sm();
void pf();
void boi();
void exit();
void signup1();
void login1();

void againfrontpage()
{
    cout<<"\n\n";
    cout<<"                                              ASSALAMUALAIKUM \n";
    cout<<"                                    WELCOME TO THE 'IIUC CHIRKUT' project\n\n";
    cout<<"                                        IF YOU ARE TEACHER - (PRESS 1)"<<"\n";
    cout<<"                                        IF YOU ARE STUDENT - (PRESS 2)"<<"\n\n\n";
    cout<<"                                        FOR EXIT           - (PRESS 3)"<<"\n";
    char choice;
    cin>>choice;
    if(choice == '1')
        {
            frontpage2();
        }
        else if( choice =='2')
        {
            frontpage1();
        }
        else if(choice == '3')
        {
            exit();
        }
}
void frontpage2()
{
         system("cls");//screen clear kore dibe
    cout<<"            Do you want to sign up (S) or login(L)?\n";
    cout<<"            FOR SIGN UP - press s/S button \n             or \n";
    cout<<"            FOR LOGIN press l/L button: \n\n";
    cout<<"             BACK     - (press 0)\n";
    char choice;
    cin>>choice;
    if(choice == 's' || choice == 'S')
        signup1();//signup function call
     else if(choice == 'l' || choice == 'L') 
        login1();//login function call
        else if(choice == '0')
             againfrontpage();
     else
        cout << "INVALID. PLEASE TRY AGAIN!!!" << endl;
}

void signup1()//teacher
{
       string firstname,lastname,email,phone,password1,sub;
    cout<<"Enter your first name: "<<endl;  cin>>firstname;
    cout<<"Enter your last name: "<<endl;  cin>>lastname;
    cout<<"What subject do you teach?"<<endl; cin>>sub;
    cout<<"Enter your email: "<<endl;  cin>>email;
    cout<<"Enter your phone number: "<<endl;  cin>>phone;
    cout<<"Set password"<<endl; cin>>password1;

    ofstream outputfile("teacheruserssheet.csv",ios::app);//ofstream= output file stream
                                                    //app= append mode . append er otho hosse jog kora. i mean kono lekhar sthe onno lekha jog kora
                                                    //csv dewoa te xcel sheet open hobe
    outputfile<<firstname<<","<<lastname<<","<<sub<<","<<email<<","<<phone<<","<<password1<<endl;//eivbe show korbe excel sheet e
    outputfile.close();//file close korlam
     system("cls");//screen clear kore dibe
        cout<<"\n\n\nCONGRATS\n\n";
    cout<<"You have been signed up successfully!!"<<endl;

    back_again_login1();
}

void back_again_login1()
{
        cout<<"Back to login page press(l/L) \nor exit press(x/X)"<<endl;
    char choice2;
    cin >> choice2;
    if (choice2 == 'l' || choice2 == 'L') {
        login1();
    } else if(choice2 == 'x' || choice2 == 'X') {
        exit();//full program theke ber hoi jabe . Successfull termination dekhabe 
    } else {
        cout << "INVALID. PLEASE TRY AGAIN!!!" << endl;
    }
}



void frontpage1()//teacher
{
    system("cls");//screen clear kore dibe
    cout<<"            Do you want to sign up (S) or login(L)?\n";
    cout<<"            FOR SIGN UP - press s/S button \n"; 
    cout<<"            FOR LOGIN press l/L button: \n";
    char choice;
    cin>>choice;
    if(choice == 's' || choice == 'S')
        signup();//signup function call
     else if(choice == 'l' || choice == 'L') 
        login();//login function call
     else
        cout << "INVALID. PLEASE TRY AGAIN!!!" << endl;
    
}

    void login1()
{
    string email,password;
    cout<<"Enter your email: ";cin>>email;
    cout<<endl;
    cout<<"Enter your password: ";cin>>password;
    cout<<endl;
    system("cls");
    string f,l,e,i,pass,su;
    ifstream inputfile("teacheruserssheet.csv");//ifstream= reading data ..eita data read kore
    bool milse=false;//boolian variable . ekhane 
    while(getline(inputfile,f,',') && getline(inputfile,l,',') && getline(inputfile,su,',') 
    && getline(inputfile,e,',') && getline(inputfile,i,',') && getline (inputfile,pass,'\n'))
                                    //user er information check korbe   
                                    //first e amra output e firstname likhe j data save rakhcilam oita 'f' e store hobe
                                    //baki information er jonneo same kaj 
                                    //output e jto ta colum wise information chilo ekhaneo ttho tai dite hobe
                                    //csv sheet er colum separate er jonne comma use korchi
    {
        if(e==email && pass== password)
        {
            milse=true;
            break;
        }
    }
    inputfile.close();//file to close korlam
    if(milse)
    {
        cout<<"                   LOGIN SUCCESSFULL!!"<<endl;
        cout<<"                   NAME       :    "<<f<<"\n";
        cout<<"                   COURSE NAMe:    "<<su<<"\n";
        cout<<"\n\n";
        step0();//////ekhane ektu kaj baki

    }
    else
    {
        cout<<"Invalid email or password !! TRY AGAIN !!";
        back_again_login1();
    }
}

void signup()
{
    string firstname,lastname,email,id1,password1;
    cout<<"Enter your first name: "<<endl;  cin>>firstname;
    cout<<"Enter your last name: "<<endl;  cin>>lastname;
    cout<<"Enter your email: "<<endl;  cin>>email;
    cout<<"Enter your university id: "<<endl;  cin>>id1;
    cout<<"Set password"<<endl; cin>>password1;

    ofstream outputfile("userssheet.csv",ios::app);//ofstream= output file stream
                                                    //app= append mode . append er otho hosse jog kora. i mean kono lekhar sthe onno lekha jog kora
                                                    //csv dewoa te xcel sheet open hobe
    outputfile<<firstname<<","<<lastname<<","<<email<<","<<id1<<","<<password1<<endl;//eivbe show korbe excel sheet e
    outputfile.close();//file close korlam
     system("cls");//screen clear kore dibe
        cout<<"\n\n\nCONGRATS\n\n";
    cout<<"You have been signed up successfully!!"<<endl;

    back_to_login();

}
void back_to_login()
{
        cout<<"Back to login page press(l/L) \nor exit press(x/X)"<<endl;
    char choice2;
    cin >> choice2;
    if (choice2 == 'l' || choice2 == 'L') {
        login();
    } else if(choice2 == 'x' || choice2 == 'X') {
        exit();//full program theke ber hoi jabe . Successfull termination dekhabe 
    } else {
        cout << "INVALID. PLEASE TRY AGAIN!!!" << endl;
    }
}
void exit()
{
         system("cls");//screen clear kore dibe
    cout<<"THANKS FOR USING THIS PROGRAM"<<"\n";
    exit(0);//full program theke ber hoi jabe . Successfull termination dekhabe ;
}


void login()
{
    string id,password;
    cout<<"Enter your university id: ";cin>>id;
    cout<<endl;
    cout<<"Enter your password: ";cin>>password;
    cout<<endl;
    system("cls");
    string f,l,e,i,pass;
    ifstream inputfile("userssheet.csv");//ifstream= reading data ..eita data read kore
    bool milse=false;//boolian variable . ekhane 
    while(getline(inputfile,f,',') && getline(inputfile,l,',') 
    && getline(inputfile,e,',') && getline(inputfile,i,',') && getline (inputfile,pass,'\n'))
                                    //user er information check korbe   
                                    //first e amra output e firstname likhe j data save rakhcilam oita 'f' e store hobe
                                    //baki information er jonneo same kaj 
                                    //output e jto ta colum wise information chilo ekhaneo ttho tai dite hobe
                                    //csv sheet er colum separate er jonne comma use korchi
    {
        if(i==id && pass== password)
        {
            milse=true;
            break;
        }
    }
    inputfile.close();//file to close korlam
    if(milse)
    {
        cout<<"  LOGIN SUCCESSFULL!!"<<endl;
        cout<<"      NAME:    "<<f<<"\n";
        cout<<"      id:    "<<i<<"\n";
        cout<<"\n\n";
        step0();
    }
    else
    {
        cout<<"Invalid id or password !! TRY AGAIN !!";
        back_to_login();
    }

}
void step0()
{
         
    cout<<"CHOOSE A OPTION"<<"\n";
    cout<<"TEACHER - STUDENT SESSION       - (PRESS 1)"<<"\n";
    cout<<"IIUC STUDY MATERIALS            - (PRESS 2)"<<"\n";
    cout<<"Other EBOOKS                    - (press 3)"<<"\n\n\n";
    cout<<"FOR EXIT                        - (press x or X)"<<"\n";
    char choice4;
    cin>>choice4;
    if(choice4 == '1')
        ts();
    else if(choice4 == '2')
        sm();
        else if(choice4 == 'x' || choice4 == 'X') {
        exit();
        }
    else if(choice4 =='3')
    {
            boi();
    }
      
}
void hsc()
{
    system("cls");//screen clear kore dibe
    int i;
     cout << "Enter your option: ";
    cin>>i;
    if (i == 1)
    {
        // bangla
    }
    else if (i == 2)
    {
        // phy
        cout<<"now not available";
    }

    else if (i == 3)
    {
        // chemistry
        cout<<"now not available";
    }

    else if (i == 4)
    {
        // bio
        cout<<"now not available";
    }

    else if (i == 5)
    {
        // higher math
        cout<<"now not available";
    }

    else if (i == 6)
    {
        // eng
        cout<<"now not available";
    }

    else if (i == 7)
    {
        // math
        cout<<"now not available";
    }
    else
    {
        cout << "Invalid option. Please try again.\n";
        hsc();
    }

}

    void ssc()
    {
        int s;
        cout << "Enter your option: ";
        cin >> s;

        if (s == 1)
        {
            // bangla
            cout<<"now not available";
        }

        else if (s == 2)
        {
            // phy
            system("start https://drive.google.com/file/d/1IxFltI5WypSiyOruMNhkjirOdFaRM3Qh/view?usp=sharing\"");
        }
        else if (s == 3)
        {
            // chemistry
            cout<<"now not available";
        }

        else if (s == 4)
        {
            // bio
            cout<<"now not available";
        }

        else if (s == 5)
        {
            // higher math
            cout<<"now not available";
        }

        else if (s == 6)
        {
            // eng
            cout<<"now not available";
        }

        else if (s == 7)
        {
            // math
            system("start https://drive.google.com/file/d/1jpl30kkY1L-ByxnZMM6pvPwhoNWhul1R/view?usp=sharing\"");
        }
        else
        {
            cout << "Invalid option. Please try again.\n";
            ssc();
        }
    }

        void boi()
        {
            system("cls");//screen clear kore dibe
            cout << "1. SSC Book all pdf: (press 1)\n";
            cout << "2. HSC Book all pdf: (press 2)\n";
            // cout<<"\n";

            pf();
        }

        void pf()
        {
            int n;
            cout << "Enter your option: ";
            cin >> n;
            system("cls");
            if (n == 1)
            {
                cout << "bangla              :(press  1)\n";
                cout << "phy                 :(press  2)  \n";
                cout << "chemistry           :(press  3) \n";
                cout << "Biology             :(press  4)\n";
                cout << "Higher math         :(press  5)\n";
                cout << "English             :(press  6)\n";
                cout << "Math                :(press  7)\n";
                cout<<"\n";

                ssc();
            }
            else if(n==2)
            {
                cout << "bangla              :(press  1)\n";
                cout << "phy                 :(press  2)  \n";
                cout << "chemistry           :(press  3) \n";
                cout << "Biology             :(press  4)\n";
                cout << "Higher math         :(press  5)\n";
                cout << "English             :(press  6)\n";
                cout << "Math                :(press  7)\n";
                cout<<"\n";
                hsc();
            }
        }
void ts()//teacher student session
{
         system("cls");//screen clear kore dibe
    cout<<"         IN THIS SECTION YOU CAN COMMUNICATE WITH YOUR TEACHERS"<<"\n\n";
    cout<<"               NOTE: Be polite with your teachers"<<"\n\n";
    cout <<"         Check for new messages        (Press 1)" << endl;
    cout <<"         Display messages              (Press 2)" << endl;
    cout <<"         ONLINE MEETING                (Press 3)" << endl;
    cout <<"         RECORDED ONLINE CLASS         (Press 4)" << endl;
    cout <<"         CREATE GROUPS                 (Press 5)" << endl;
    cout <<"         TEACHERS INFORMATION          (Press 6)" << endl;
    cout <<"         Exit                          (Press X/x)\n\n";
    cout<<"          BACK                          (Press 0)" <<"\n";
    char choice6;
    cin>>choice6;
    if(choice6== 'x' || choice6== 'X')
    {
        exit(); 
         //kaj baki ache
    }
    else if( choice6== '0')
    {
            step0();
    }
}
void sm()
{
   
    cout<<"   IN THIS SECTION YOU WILL GET ALL OF YOUR STUDY MATERIALS OF IIUC"<<'\n';
    step1();
}

void step1()
{
         system("cls");//screen clear kore dibe
    cout<<"                Which department do you study in?"<<endl;
    cout<<"                1.CSE    (press 1)"<<'\n';
    cout<<"                2.EEE    (press 2)"<<'\n';
    cout<<"                3.CIVIL  (press 3)\n  \n";
    cout<<"                BACK -  (PRESS 0)\n";
    char choice3;
    cin>>choice3;
    if(choice3 == '1')
    {
        cse();
    }
    else if(choice3 == '0')
    step0();
    else
    cout<<"invalid";
}
void cse()
{
         system("cls");//screen clear kore dibe
    cout<<"             which semester?"<<endl;
    cout<<"             1st    (press 1)"<<endl; 
    cout<<"             2nd    (press 2)"<<endl;
    cout<<"             3rd    (press 3)"<<endl;
    cout<<"             4th    (press 4)"<<endl; 
    cout<<"             5th    (press 5)"<<endl;
    cout<<"             6th    (press 6)"<<endl;
    cout<<"             7th    (press 7)"<<endl;
    cout<<"             8th    (press 8)"<<endl;
    cout<<"BACK -  (PRESS 0)\n";

    char choice4;
    cin>>choice4;
    if(choice4== '1')
        cse1(); 
        else if(choice4=='2')
        cse2();
        else if(choice4=='0')
        step1();
        
}
void cse1()
{
         system("cls");//screen clear kore dibe
    cout<<"            ------WHICH HAND NOTES YOU WANT--------"<<endl;
    cout<<"             CSE-1121      (Press 1)"<<'\n';
    cout<<"             MATH-1107     (Press 2)"<<'\n';
    cout<<"             EEE-1121      (Press 3)"<<'\n';
    cout<<"             PHY-1101      (Press 4)"<<'\n';
    cout<<"             UREL-1106     (Press 5)"<<'\n';
    cout<<"             UREM-1101     (press 6)"<<'\n';
    cout<<"BACK -  (PRESS 0)\n";
char choice5;
cin >> choice5;
if(choice5 == '1')
  {
       system("start https://drive.google.com/drive/folders/1200KF42UUgUIB7SLThOq77owo_DLFB4L?usp=drive_link\"");}
    else if (choice5 == '2')
    {
    cse();
    }
else if (choice5 == '2')
   {
        system("start https://drive.google.com/drive/folders/1ZhGkKOq6Hg4YTbe6mr-AZyWiHUdD0-Ud?usp=drive_link\"");}
else if(choice5 == '3')
  {
        system("start https://drive.google.com/drive/folders/1eFSOk8hPpveJpWljQSE9YjHEFZMbrHy2?usp=drive_link\""); }
else if(choice5 == '4')
   {
        system("start https://drive.google.com/drive/folders/1DUgEYzb4Ij3H4A-wRv2FWsYp5Gry7sQm?usp=drive_link\"");
    }
else if(choice5== '5')
   {
        system("start https://drive.google.com/drive/folders/1mmjd-7Z6QdbChlZkPRKb6at3bUUye-t4?usp=drive_link\"");}
    else if(choice5 == '6')
    {
        system("start https://drive.google.com/drive/folders/1XH26596shYSf12sQbhpIfdUxrvhAK1Kn?usp=drive_link\"");}
}
void cse2()
{
         system("cls");//screen clear kore dibe
    cout<<"            ------WHICH HAND NOTES YOU WANT--------"<<endl;
    cout<<"                  CSE-1221       (Press 1)"<<'\n';
    cout<<"                  CSE-1223       (Press 2)"<<'\n';
    cout<<"                  EEE-1221       (Press 3)"<<'\n';
    cout<<"                  MATH-1207      (Press 4)"<<'\n';
    cout<<"                  PHY-1201       (Press 5)"<<'\n';
    cout<<"                  CSE-1230       (press 6)"<<'\n';
    cout<<"                  URED-1201      (press 7)\n\n";
    cout<<"BACK -  (PRESS 0)\n";

    char choice5;
    cin >> choice5;
    if(choice5 == '1')
    {
        system("start https://drive.google.com/drive/folders/1-Auss55EfqowaP2GOZVj46kdu6nocs7O?usp=sharing\"");
    }
    else if(choice5=='0')
    {
        cse();
    }
    else if(choice5=='2')
    {
        system("start https://drive.google.com/drive/folders/1-M6ZLvJTCFcRVgSLodr--ex403t1D-3J?usp=sharing\"");
    }
    else if(choice5=='3')
    {
        system("start https://drive.google.com/drive/folders/1-ZtVzwrJObPKcoBRq2yJcorRghRfcqhU?usp=sharing\"");
    }
    else if(choice5=='4')
    {
        system("start https://drive.google.com/drive/folders/1-V4sgpPHRMhRTYSjdekuIufrujSDuo63?usp=sharing\"");
    }
    else if(choice5=='5')
    {
        system("start https://drive.google.com/drive/folders/1-ABmfn-sD953AiwLmq-4FHLaJqs85UqD?usp=sharing\"");
    }
    else if(choice5=='6')
    {
        system("start https://drive.google.com/drive/folders/1-PaZruPS1Jj-2ua2JxmLhgdekg34X0fa?usp=sharing\"");

    }
    else if(choice5=='6')
    {
        system("start https://drive.google.com/drive/folders/1-_NLNFJRhalqVGtufg46Vn92Qllqac-k?usp=sharing\"");
    }

}
int main()
{
    againfrontpage();
    return 0;
}