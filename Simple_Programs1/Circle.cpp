//Area of Circle          = 3.14 * Radius * Radius
//Circumference of Circle = 2 * 3.14 * Radius

#include<iostream>
using namespace std;
int main(){
  float r;
  cout<<"Enter Radius of a Circle:";
  cin>>r;
  
  cout<<endl<<"Area of Circle = "<<(3.14*r*r);
  cout<<endl<<"Circumference of Circle = "<<(2*3.14*r);
  return 0;
}
