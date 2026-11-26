#include<iostream>
using namespace std;
struct employee{
  int id;
  char name[10], role[50];
  float salary;
};
int main(){
  struct employee e1 = {101, "Arun", "Front End", 35000};
  struct employee e2 = {102, "Bala", "Front End", 35000};
  struct employee e3 = {201, "Ravi", "Back End", 50000};
  struct employee e4 = {501, "Kumar", "Data Base", 45000};
  struct employee e5 = {502, "Shana", "Data Base", 45000};
  
  cout<<"ID\tName\tDesignation\tSalary"<<endl;
  cout<<e1.id<<"\t"<<e1.name<<"\t"<<e1.role<<"\t"<<e1.salary<<endl;
  cout<<e2.id<<"\t"<<e2.name<<"\t"<<e2.role<<"\t"<<e2.salary<<endl;
  cout<<e3.id<<"\t"<<e3.name<<"\t"<<e3.role<<"\t"<<e3.salary<<endl;
  cout<<e4.id<<"\t"<<e4.name<<"\t"<<e4.role<<"\t"<<e4.salary<<endl;
  cout<<e5.id<<"\t"<<e5.name<<"\t"<<e5.role<<"\t"<<e5.salary<<endl;
  return 0;
}
