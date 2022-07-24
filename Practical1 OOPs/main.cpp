#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
class Database
{
private:
    int roll;
    string name;
    string std;
    string Div;
    string dob;
    long long contact;
    int license;

public:
    static int stdno;
    static void count()
    {
        cout << "\nNo. of objects created: " << stdno;
    }

    Database()
    {

        name = "krishna";
        roll = 62;
        std = "SE-comp";
        Div="D";
        dob = "25/12/2002";
        contact = 829453025;
        license = 4363;
        ++stdno;
    }
    Database(Database *obj)
    {
        name = obj->name;
        Div = obj->Div;
        std = obj->std;
        contact = obj->contact;
        dob = obj->dob;
        Div = obj->Div;
        license = obj->license;
        ++stdno;
    }
    void inlinefunc()
    {
        cout << "Inline function called" << endl;
    }
    void getdata()
    {

        cout << "Please,Enter your Name:- " << endl;
        getline(cin, name);
        cout << "Please,Enter your Roll No:- " << endl;
        cin >> roll;
        cout << "Please,Enter your class:- " << endl;
        cin >> std;
        cout << "Please,Enter your contact No:- " << endl;
        cin >> contact;
        cout << "Please,Enter your Division No:- " << endl;
        cin >> Div;
        cout << "Please,Enter your Licesnse No:- " << endl;
        cin >> license;
        cout << "Please,Enter your Date of birth:- " << endl;
        cin >> dob;
    }
    friend void display(Database d);
    ~Database()
    {
        cout << "\n\n"
             <<"Data of "<< this->name <<" is deleted"<<endl;
    }
};

void display(Database d)
{
    cout << "Friend function called" << endl;
    cout << "name:- " << d.name << " "
         << "contact:- " << d.contact << " "
         << "Date of birth:- " << d.dob << " "
         << " Division:- "
         << " " << d.Div << " "
         << "License:- " << d.license << endl;
}
int Database::stdno;

int main()
{
    int n;
    Database d1, *ptr[5];
    cout << endl<<"Default constructor called! ,Default Entries:- "<<endl;
    display(d1);
    d1.inlinefunc();
    d1.getdata();
    display(d1);

    Database d2(&d1);
    cout << "\n\nUse of copy constructor :\n";
    display(d2);

    cout << "\nHow many objects u want to create?:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new Database();
        ptr[i]->getdata();
    }

    for (int i = 0; i < n; i++)
        display(*ptr[i]);
    Database::count();
    for (int i = 0; i < n; i++)
    {
        delete (ptr[i]);
    }
    cout << "\nObjects deleted!";
    return 0;
}
