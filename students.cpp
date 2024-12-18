// Copyright to Bhargav Nath @ 2022 All Rights Reserved //
// Menu Driven OOP Program //
#include<iostream>
#include<string>
using namespace std;

#define MAX 30

int limit = 0;
void inputDetails();
void showAll();
void showChoices();
void searchByRollNo();
void searchName();
void searchDept();
void addStudent();

class Student{
    private:
        int rollNo;
        string name;
        string dept;
    public:
        void setDetails();
        void getDetails();

        int getRollNo()
        {
            return rollNo;
        }
        string getName()
        {
            return name;
        }
        string getDept()
        {
            return dept;
        }
};

void Student::setDetails()
{
    cout<<endl;
    cout<<"Enter Roll No: ";
    cin>>rollNo;
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin, name);
    cout<<"Enter Department: ";
    getline(cin, dept);
}

void Student::getDetails()
{
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
}

int main()
{
    char respond;
    cout<<"Do you want to insert at least one Student Details? (y/n): ";
    cin>>respond;
    if(respond=='y')
    {
        inputDetails();
    }
    int choice;
    do
    {
        showChoices();
        cin>>choice;
        switch(choice)
        {
            case 1:
                if(limit<=MAX)
                {
                    addStudent();
                }
                else
                {
                    cout<<"Can't Enter More. Maximum Student Limit is 30.";
                }
                break;
            case 2:
                searchByRollNo();
                break;
            case 3:
                searchName();
                break;
            case 4:
                searchDept();
                break;
            case 5:
                showAll();
                break;
            case 0:
                cout<<"Terminating..."<<endl;
                break;
            default :
                cout<<"Invalid Input"<<endl;
        }
    } while(choice!=0);
    return 0;
}

Student student[MAX];

void inputDetails()
{
    cout<<"\nHow many Students you want to Insert? (Maximum 30): ";
    cin>>limit;
    for(int i=0; i<limit; i++)
    {
        cout<<"\nEnter Details of Student No "<<i+1;
        student[i].setDetails();
    }
}

void showAll()
{
    cout<<endl;
    cout<<"*** Student Details ***";
    cout<<endl;
    int flag = 0;
    for(int i=0; i<limit; i++)
    {
        flag = 1;
        cout<<endl;
        cout<<"Details of Student "<<i+1<<endl;
        student[i].getDetails();
    }
    if (flag==0)
    {
        cout<<"No data available";
    }
}

void addStudent()
{
    cout<<"\nEnter Details of Student No "<<limit+1;
    student[limit].setDetails();
    limit++;
}

void searchByRollNo()
{
    cout<<endl;
    int rN;
    cout<<"Enter Roll No: ";
    cin>>rN;
    int flag = 0;
    int i;
    for(i=0; i<limit; i++)
    {
        if(student[i].getRollNo() == rN)
        {
            flag = 1;
            cout<<endl;
            student[i].getDetails();
        }
    }
    if(flag == 0)
    {
        cout<<endl;
        cout<<"No Data Found"<<endl;
    }
}

void searchName()
{
    cout<<endl;
    string nM;
    cout<<"Enter Name: ";
    cin.ignore();
    getline(cin, nM);
    int flag = 0;
    int i;
    for(i=0; i<limit; i++)
    {
        if(student[i].getName() == nM)
        {
            flag = 1;
            cout<<endl;
            student[i].getDetails();
        }
    }
    if(flag == 0)
    {
        cout<<endl;
        cout<<"No Data Found"<<endl;
    }
}

void searchDept()
{
    cout<<endl;
    string dP;
    cout<<"Enter Department: ";
    cin.ignore();
    getline(cin, dP);
    int flag = 0;
    int i;
    for(i=0; i<limit; i++)
    {
        if(student[i].getDept() == dP)
        {
            flag = 1;
            cout<<endl;
            student[i].getDetails();
        }
    }
    if(flag == 0)
    {
        cout<<endl;
        cout<<"No Data Found"<<endl;
    }
}

void showChoices()
{
    cout<<endl;
    cout << "*** MENU ***" << endl;
    cout << "1: Add a Student " << endl;
    cout << "2: Search by Roll No " << endl;
    cout << "3: Search by Name " << endl;
    cout << "4: Search by Department " << endl;
    cout << "5: View All " << endl;
    cout << "0: Exit " << endl;
    cout << "Enter your choice: ";
}
