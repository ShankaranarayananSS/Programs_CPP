//Display Value using Single Pointer and Double Pointer

#include<iostream>
using namespace std;
int main(){
  int num, *p1=&num, **p2=&p1;
  cout<<"Enter number:";
  cin>>num;
  
  cout<<endl<<"Number using Variable = "<<num;
  cout<<endl<<"Number using Pointer = "<<*p1;
  cout<<endl<<"Number using Double Pointer = "<<**p2;
  return 0;
}
