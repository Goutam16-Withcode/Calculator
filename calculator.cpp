#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
      int num1;
      cout<<"Enter the number 1 :"<<endl;
      cin>>num1;

      string operation;
      cout<<"Enter the operation that you want to perform (+,-,*,/) :"<<endl;
      cin>>operation;

      int num2;
      cout<<"Enter the number 2 :"<<endl;
      cin>>num2;

      if (operation=="+")
      {
       cout<<"This is the addition : "<<num1+num2;
      }
      else if (operation=="-")
      {
       if(num1>num2)
        cout<<"This is the substraction : "<<num1-num2;
        else{
            cout<<"This is the substraction : "<<num2-num1;  
        }
      }
      else if (operation=="*")
      {
       cout<<"This is the multiplication : "<<num1*num2;
      }
      else 
      {
       cout<<"This is the divison : "<<num1/num2;
      }
      return 0;
}