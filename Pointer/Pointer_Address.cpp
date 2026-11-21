//Display Memory Address using Pointer

#include<iostream>
using namespace std;
int main(){
  int num, *pointer=&num;
  cout<<"Enter number:";
  cin>>num;
  
  cout<<endl<<"The number = "<<num;
  cout<<endl<<"The address = "<<pointer;
  return 0;
}
