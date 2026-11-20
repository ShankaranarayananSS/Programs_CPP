//Area of Rectangle      = Length * Breadth
//Perimeter of Rectangle = 2 * (Length + Breadth)

#include<iostream>
using namespace std;
int main(){
  int l,b;
  cout<<"Enter Length of a Rectangle:";
  cin>>l;
  cout<<"Enter Breadth of a Rectangle:";
  cin>>b;
  
  cout<<endl<<"Area of Rectangle = "<<(l*b);
  cout<<endl<<"Perimeter of Rectangle = "<<2*(l+b);
  return 0;
}
