#include<iostream>
using namespace std;
int main()
{ 
  unsigned int a=4294967296;
  cout <<a;
  if (a>4294967295)
  cout<<"ok"<<"endl";
  else
  cout<<"overflow";
  return 0;
  
  
}
