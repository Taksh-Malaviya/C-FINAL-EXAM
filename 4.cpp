/*4. Write a Program which illustrates Method Overriding by using three classes.*/

#include<iostream>

using namespace std;
class Sum
 {  
    public:  
    int n,n1,div;
		void add(){    
			cout<<" ENTER THE NUMBER 1..."<<endl;
			cin>>n;
			cout<<" ENTER THE NUMBER 2..."<<endl;
			cin>>n1;
			
			div=n/n1;    
   cout<<div<<endl;
    }      
    
};   
class Calculate : public Sum    
{    
 public: 
      int n3,n4,multi; 
      void add()    
    {    
       cout<<"ENTER THE NUMBER 3"<<endl;
	   cin>>n3;
	       
       cout<<"ENTER THE NUMBER 4"<<endl;
	   cin>>n4;
	     
		 multi=n3*n4;
		 cout<<multi<<endl;     
    }    
};  
int main() {

Calculate c;
c.div;
c.multi;
    
   return 0;  
}  

