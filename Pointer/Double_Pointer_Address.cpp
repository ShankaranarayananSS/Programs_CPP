//Display Memory Address using Single Pointer and Double Pointer

#include<iostream>
using namespace std;
int main(){
  int num, *p1=&num, **p2=&p1;
  cout<<"Enter number:";
  cin>>num;
  
  cout<<endl<<"The number = "<<num;
  cout<<endl<<"The address of the number = "<<p1;
  cout<<endl<<"The address of the address = "<<p2;
  return 0;
}
