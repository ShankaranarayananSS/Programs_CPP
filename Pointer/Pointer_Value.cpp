//Display Value using Pointer

#include<iostream>
using namespace std;
int main(){
  int num, *pointer=&num;
  cout<<"Enter number:";
  cin>>num;
  
  cout<<endl<<"Number using Variable = "<<num;
  cout<<endl<<"Number using Reference = "<<*pointer;
  return 0;
}
