//Swap Two Numbers using Pointer

#include<iostream>
using namespace std;
int main(){
  int n1,n2, *p1=&n1, *p2=&n2, *temp;
  cout<<"Enter number-1:";
  cin>>n1;
  cout<<"Enter number-2:";
  cin>>n2;
  
  cout<<endl<<"Before Swap = "<<*p1<<" and "<<*p2;
  temp = p1;
  p1 = p2;
  p2 = temp;
  cout<<endl<<"After Swap = "<<*p1<<" and "<<*p2;
  return 0;
}
