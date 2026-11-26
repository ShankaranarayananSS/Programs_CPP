//Data Types - Obtain and Display Student Details

#include<iostream>
using namespace std;
int main(){
  int roll;
  float mark;
  char grade, name[10];
  
  cout<<"Enter name:";
  cin>>name;
  cout<<"Enter roll no:";
  cin>>roll;
  cout<<"Enter percentage:";
  cin>>mark;
  cout<<"Enter grade:";
  cin>>grade;
  
  cout<<endl<<"Name = "<<name;
  cout<<endl<<"Roll No = "<<roll;
  cout<<endl<<"Percentage = "<<mark;
  cout<<endl<<"Grade = "<<grade;
  return 0;
}
