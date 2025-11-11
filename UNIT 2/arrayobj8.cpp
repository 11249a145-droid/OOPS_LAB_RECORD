#include<iostream>
using namespace std;
class Employee{
    int id;
    char name[20];
    public:
    void getData(){
        cout<<"Enter ID and Name:";
        cin>>id>>name;
    }
    void display(){
        cout<<"ID:"<<id<<"Name:"<<name<<endl;
    }
};
int main(){
    Employee e[3];
    for(int i=0;i<3;i++)
    {
        cout<<"\n Enter details of employee"<<i+1<<":\n";
        e[i].getData();
    }
    cout<<"\nEmployee Details:\n";
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}