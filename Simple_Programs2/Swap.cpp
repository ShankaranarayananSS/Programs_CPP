//Swap Two Numbers

#include<iostream>
using namespace std;
int main(){
  int n1,n2,temp;
  cout<<"Enter number-1:";
  cin>>n1;
  cout<<"Enter number-2:";
  cin>>n2;
  
  cout<<endl<<"Before Swap = "<<n1<<" and "<<n2;
  temp = n1;
  n1 = n2;
  n2 = temp;
  cout<<endl<<"After Swap = "<<n1<<" and "<<n2;
  return 0;
}
