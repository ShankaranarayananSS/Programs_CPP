//Addition of Two Numbers using Pointer

#include<iostream>
using namespace std;
int main(){
  int n1,n2, *p1=&n1, *p2=&n2;
  cout<<"Enter number-1:";
  cin>>n1;
  cout<<"Enter number-2:";
  cin>>n2;
  
  cout<<"Addition = "<<(*p1 + *p2);
  return 0;
}
