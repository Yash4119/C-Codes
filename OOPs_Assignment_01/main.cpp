#include<iostream>
#include<string.h>    // header file declares a set of functions to work strings.
using namespace std;

        class database
  {
       int roll;
       char name[20];
       char Class[10];
       char Div[10];
       char dob[12];
       char blood_group[5],city[10];
       char phone[12],license[12];

   public:
           static int stdno;      // declaring of static variable
          inline static void count()    // defining static function
     {
          cout<<"\n No.of objects created: "<<stdno;
     }

         database()        // default constructor
    {
      roll=7;
      strcpy(name,"Yash");
      strcpy(Class,"SE");
      strcpy(Div,"B");
      strcpy(dob,"06/03/2002");
      strcpy(blood_group,"AB+");
      strcpy(city,"Pune");
      strcpy(phone,"9284590394");
      strcpy(license,"JKA1356");
      ++stdno;
    }
                  void getdata()// defining member function
         {
          cout<<"\nEnter Name :- ";
          cin>>name;
          cout<<endl;
          cout<<"\nEnter Roll Number :- ";
          cin>>roll;
          cout<<endl;
          cout<<"\nEnter Class :- ";
          cin>>Class;
          cout<<endl;
          cout<<"\nEnter Div :- ";
          cin>>Div;
          cout<<endl;
          cout<<"\nEnter Date Of Birth int this format (dd/mm/yyyy) :- ";
          cin>>dob;
          cout<<endl;
          cout<<"\nEnter Blood Group :- ";
          cin>>blood_group;
          cout<<endl;
          cout<<"\nEnter City :- ";
          cin>>city;
          cout<<endl;
          cout<<"\nEnter Phone Number :- ";
          cin>>phone;
          cout<<endl;
          cout<<"\nEnter License Number :- ";
          cin>>license;
          cout<<endl;

         }
                friend void display(database data1);   // declaration of friend function

            ~database()   // destructor
         {
             cout<<endl<<"Data of "<<this->name<<" is destroyed from the database!\n";
         }
};

         void display(database data1) // definition of friend function
       {
         cout<<"\n Name: "<<data1.name;
         cout<<"\n Roll No: "<<data1.roll;
         cout<<"\n Class: "<<data1.Class;
         cout<<"\n Div: "<<data1.Div;
         cout<<"\n DOB: "<<data1.dob;
         cout<<"\n Blood group: "<<data1.blood_group;
         cout<<"\n City: "<<data1.city;
         cout<<"\n Phone No: "<<data1.phone;
         cout<<" \n License No: "<<data1.license;
         cout<<endl;
      }
 int database::stdno; // Define static data member stdno outside the class;

                 int main()
      {
          char answer;
          int n,i;
          database data1,*ptr[5];

          do{
        cout<<endl<<"#*******Choose the Operation you want to perform *******#"<<endl;
        cout<<"\n Menu"<<endl<<"1. Create Database."<<endl<<"2. Display Databse."<<endl<<"3. Default Constructor."<<endl<<"4. Delete (Destructor)"<<endl;
        cout<<endl<<"Enter your choice : ";
        int choice;
        cin>>choice;                                    //Asking the user the type of Operation he/she wants to perform
        cout<<endl;
        switch(choice){
            case 1:{
                 cout<<"\nHow many objects u want to create?:";
               cin>>n;
            for(i=0;i<n;i++)
           {
              ptr[i]=new database(); //new operator use to dynamic memory(run time) allocation
              ptr[i]->getdata();
           }
            }
            break;
            case 2:{
                for(i=0;i<n;i++)
                 display(*ptr[i]);
                database::count();  // calling of static function

            }
            break;
            case 3:{
                cout<<endl<<"Default data displayed"<<endl;
                display(data1);                         //obj2 invoking the default constructor of the person class


            }
            break;
            case 4:{
                for(i=0;i<n;i++)
             {
                 delete(ptr[i]); //delete operator use to deallocation of memory
             }
            cout<<"\nObjects deleted!" ;                          //invoking the destructor for the person class using delete keyword to delete records from database
            }
            break;
        }
        cout<<endl<<"Want to Continue y/n : ";

        cin>>answer;
        cout<<endl;
    }while(answer=='y');
    return 0;
      }
