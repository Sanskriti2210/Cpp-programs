#include <iostream>
using namespace std;

int main() {
  
  int marks;
  cout<<"Enter the marks:";
  cin>>marks;

   if(marks>=90){
     cout<<"A grade";
   }
  else {
    if(marks>=80){
    cout<<"B grade";
  }
  else {
    if(marks>=70){
    cout<<"C grade";
  }
  else {
    if(marks>=40){
    cout<<"D grade";
  }
  else {
     cout<<"F grade";
  }
  }
  }
  }
}
