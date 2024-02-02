/*1. Write a C++ program to print factorial series using recursion.
Enter any Number: 5
FACTORIAL IS 120*/
#include <iostream>  
using namespace std;  

class Factorial{
	public :
	 int i,f=1,n; 
	 	void set(){   
	cout<<"Enter any Number: ";    
	cin>>n;   
  for(i=1;i<=n;i++){    
      f=f*i;    
  }   
}
void get(){

  cout<<"FACTORIAL IS "<<f;  
}
};

int main()  
{  
Factorial f;
  f.set();
  f.get();
  return 0;  
}  
