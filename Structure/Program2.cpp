#include<iostream>
using namespace std;
struct employee{
  int id;
  char name[10], role[50];
  float salary;
};
int main(){
  struct employee e;
  cout<<"Enter Employee ID:";
  cin>>e.id;
  cout<<"Enter Employee Name:";
  cin>>e.name;
  cout<<"Enter Employee Role:";
  cin>>e.role;
  cout<<"Enter Employee Salary:";
  cin>>e.salary;
  
  cout<<endl<<"ID = "<<e.id;
  cout<<endl<<"Name = "<<e.name;
  cout<<endl<<"Role = "<<e.role;
  cout<<endl<<"Salary = "<<e.salary;
  return 0;
}
