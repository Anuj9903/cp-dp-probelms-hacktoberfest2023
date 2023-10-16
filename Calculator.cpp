#include<iostream>
using namespace std;
int main()
{
  int a,b;
char c;
cout<<"Enter a,b for perform operation +, -, *, / ";
cin>>a;
cin>>b;

cout<<"Enter c operation to peform =, -, *, / ";
cin>>c;

switch(c)
{
case '+':
  cout<<"add of a,b "<<a+b;
  break;
case '-':
cout<<"substract of a,b "<<a-b;
break;
case '*':
cout<<"Multiplication of a,b "<<a*b;
break;
case '/':
cout<<"divide of a,b "<<a/b;
break;
default :
cout<<"operation not found in calculator";
  break;
}

return 0;
}
