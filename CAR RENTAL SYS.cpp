#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<unistd.h>
#include<iomanip>
using namespace std;

class customer{
 public:
      string name;
      string carname;
      string carno;
      char data;
};
class rent : public customer{
public:
    double fee=0;
      int days;
     int mob;
       void data()
       {
           int login();
           login();
           sleep(2);
           system("CLS");

        cout<<"\n\t\t\t\t\t ENTER YOUR NAME-";
        cin>>name;
        cout<<"\n\n"<<endl;
        do{
        cout<<"\t\t\t\t\t list of car available \t\t"<<endl;
        cout<<"\t\t\t\t\t-------------------------------\t\t"<<endl;
        cout<<"\t\t\t\t\t| MODEL |      CAR     | YEAR |\t\t"<<endl;
        cout<<"\t\t\t\t\t-------------------------------\t\t"<<endl;
        cout<<"\t\t\t\t\t|   A   | swift dzire  | 2018 |\t\t"<<endl;
        cout<<"\t\t\t\t\t|   B   | honda amaze  | 2019 |\t\t"<<endl;
        cout<<"\t\t\t\t\t|   C   | toyota etios | 2017 |\t\t"<<endl;
        cout<<"\t\t\t\t\t|   D   | BMW X5       | 2020 |\t\t"<<endl;
        cout<<"\t\t\t\t\t|   E   | AUDI Q7      | 2020 |\t\t"<<endl;
        cout<<"\t\t\t\t\t|   F   | fortuner     | 2019 |\t\t"<<endl;
        cout<<"\t\t\t\t\t---------------------------------\t\t"<<endl;
        cout<<""<<endl;
        cout<<" choose a car model- ";
        cin>>carname;
        cout<<"\n"<<endl;
        if(carname!="A"&& carname!="B" && carname!="C" && carname!="D" && carname!="E" && carname!="F")
        {
            cout<<" INVALID MODEL NAME  "<<endl;
        }
        else
        {
           cout<<" Choosen car is-- "<<carname<<endl;
        }
    }while(carname!="A" && carname!="B" && carname!="C"&& carname!="D" && carname!="E" && carname!="F");
       if(carname=="A")
       {
           cout<<" SPECIFICATION OF CAR "<<endl;
           cout<<"\n--------------------------------------------------------------"<<endl;
           cout<<"    40 KWh and 60 KWh  "<<endl;
           cout<<" Range\t\t\t             EPA: 139 mi 224 km  	EPA: 210 mi 340 km "<<endl;
           cout<<" max.Power,motor\t\t\t     382 hp 285 kW		382 hp 285 kW"<<endl;
           cout<<" max.Power,battery\t\t\t   235 hp 175 kW		302 hp 225 kW"<<endl;
       }
       if(carname=="B")
       {
            cout<<" SPECIFICATION OF CAR "<<endl;
           cout<<"\n---------------------------------------------------------------"<<endl;
           cout<<"    40 KWh and 60 KWh  "<<endl;
           cout<<" Range\t\t\t             EPA: 139 mi 224 km  	EPA: 210 mi 340 km "<<endl;
           cout<<" max.Power,motor\t\t\t     382 hp 285 kW		382 hp 285 kW"<<endl;
           cout<<" max.Power,battery\t\t\t   235 hp 175 kW		302 hp 225 kW"<<endl;
       }
       if(carname=="C")
       {
            cout<<" SPECIFICATION OF CAR "<<endl;
           cout<<"\n----------------------------------------------------------------"<<endl;
           cout<<"    40 KWh and 60 KWh  "<<endl;
           cout<<" Range\t\t\t             EPA: 139 mi 224 km  	EPA: 210 mi 340 km "<<endl;
           cout<<" max.Power,motor\t\t\t     382 hp 285 kW		382 hp 285 kW"<<endl;
           cout<<" max.Power,battery\t\t\t   235 hp 175 kW		302 hp 225 kW"<<endl;
       }
       if(carname=="D")
       {
            cout<<" SPECIFICATION OF CAR "<<endl;
           cout<<"\n-----------------------------------------------------------------"<<endl;
           cout<<"    40 KWh and 60 KWh  "<<endl;
           cout<<" Range\t\t\t             EPA: 139 mi 224 km  	EPA: 210 mi 340 km "<<endl;
           cout<<" max.Power,motor\t\t\t     382 hp 285 kW		382 hp 285 kW"<<endl;
           cout<<" max.Power,battery\t\t\t   235 hp 175 kW		302 hp 225 kW"<<endl;
       }
       if(carname=="E")
       {
            cout<<" SPECIFICATION OF CAR "<<endl;
           cout<<"\n------------------------------------------------------------------"<<endl;
           cout<<"    40 KWh and 60 KWh  "<<endl;
           cout<<" Range\t\t\t             EPA: 139 mi 224 km  	EPA: 210 mi 340 km "<<endl;
           cout<<" max.Power,motor\t\t\t     382 hp 285 kW		382 hp 285 kW"<<endl;
           cout<<" max.Power,battery\t\t\t   235 hp 175 kW		302 hp 225 kW"<<endl;
       }
       if(carname=="F")
       {
            cout<<" SPECIFICATION OF CAR "<<endl;
           cout<<"\n------------------------------------------------------------------"<<endl;
           cout<<"    40 KWh and 60 KWh  "<<endl;
           cout<<" Range\t\t\t             EPA: 139 mi 224 km  	EPA: 210 mi 340 km "<<endl;
           cout<<" max.Power,motor\t\t\t     382 hp 285 kW		382 hp 285 kW"<<endl;
           cout<<" max.Power,battery\t\t\t   235 hp 175 kW		302 hp 225 kW"<<endl;
       }
       cout<<"......................................................................................"<<endl;
             sleep(2);
             system("CLS");
        cout<<"\n\n\t please give some information..."<<endl;
        cout<<" enter your MOBILE NO.-";
        cin>>mob;
        cout<<" "<<endl;
        cout<<" enter the no.of days to rent a car- ";
        cin>>days;

       }
        int calculation()
        {
            cout<<"\n\n "<<endl;
            cout<<"\t\t calculating rent..."<<endl;
            sleep(1);
            cout<<"\t\t please wait....."<<endl;
            sleep(2);
            if(carname=="A")
            {
                fee = days*500;
            }
            if(carname=="B")
            {
                fee = days*600;
            }
            if(carname=="C")
            {
                fee = days*700;
            }
            if(carname=="D")
            {
                fee = days*1000;
            }
            if(carname=="E")
            {
                fee = days*1000;
            }
            if(carname=="F")
            {
                fee = days*900;
            }
            cout<<"\n\n"<<endl;
            cout<<"\t\t\t\t\t    CAR RENTAL -   Customer invoice   "<<endl;
            cout<<"\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
            cout<<"\t\t\t|  Invoice No...................|"<<setw(10)<<"#Cnb8459|"<<endl;
            cout<<"\t\t\t|  customer name................|"<<setw(10)<< name<<"|"<<endl;
            cout<<"\t\t\t|  car model....................|"<<setw(10)<<carname<<"|"<<endl;
            cout<<"\t\t\t|  car no.......................|"<<setw(10)<<"9211 |"<<endl;
            cout<<"\t\t\t|  number of days...............|"<<setw(10)<<days<<"|"<<endl;
            cout<<"\t\t\t|  your RENTAL Amount is........|"<<setw(10)<<fee<<"|"<<endl;
            cout<<"\t\t\t|  Caution money................|"<<setw(10)<<"0 |"<<endl;
            cout<<"\t\t\t------------------------------------------------------"<<endl;
            cout<<"\t\t\t|  Total Amount is..............|"<<setw(10)<<fee<<"|"<<endl;
            cout<<"\t\t\t------------------------------------------------------"<<endl;
            cout<<"\t\t\t # this is a computer generated invoice and it does not"<<endl;
            cout<<"\t\t\t   require an authorized signature #"<<endl;
            cout<<""<<endl;
            cout<<"\t\t\t///////////////////////////////////////////////////"<<endl;
            cout<<"\t\t\t You have to pay the amount before due date  "<<endl;
            cout<<"\t\t\t otherwise extra charge will be taken  "<<endl;
            cout<<"\t\t\t--------------------------------------------------------"<<endl;

        }

};
class come{
public:
    char str[1000];
    int start(){
      ifstream infile;
      infile.open("welcome.txt");
      if(!infile)
      {
          cout<<" FILE cannot open"<<endl;
      }
      while(infile)
      {
          infile.getline( str , 1000);
          if(infile)
          {
              cout<<str<<endl;
          }
      }
      infile.close();
      cout<<"\n\n\n"<<endl;
      cout<<"loading up the files......\n"<<endl;
      cout<<" please wait.....\n\n\n"<<endl;
     system("PAUSE");
    }
};

int main(){
    come obj1;
    obj1.start();
    system("CLS");

  rent r;
  r.data();
  system("CLS");
  r.calculation();


}
int login()
{
    string pass="";
    char ch;
    do{
    cout<<"\n\n\n\n\t\t\t\t\t\t  CAR RENTAL  SYSTEM   "<<endl;
    cout<<"\n\t\t\t\t-----------------------------------------------------"<<endl;
    cout<<"\n\t\t\t\t\t\t            LOGIN             "<<endl;
    cout<<"\n\n\t\t\t\t\t enter your password- ";
    ch= _getch();
    while(ch!=13)
    {
        pass.push_back(ch);
        cout<<"*";
        ch= _getch();
    }
    if(pass == "batman")
    {
        cout<<"\n\n\n\n\t\t\t\t\t ACCESS GRANTED....."<<endl;
    }
    else
    {
        cout<<"\n\n\n\t\t\t\t\t  ACCESS DENIED... "<<endl;
        cout<<"\n\t\t\t\t\t\t   invalid password ...."<<endl;
        sleep(2);
         system("CLS");
    }

    }while(pass != "batman");
}
