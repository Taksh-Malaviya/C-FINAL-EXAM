/*
2. Array Of Object (Bank Management System) Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) Search Record By A/C Number.
-----------------------------------------------------
ENTER ACCOUNT NUMBER :
456738
ENTER ACCOUNT NAME :
TAKSH
ENTR ACCOUNT TYPE :
CURRENT
ENTER BRANCH NAME :
SURAT
ENTER YOUR BALENCE :
3452345

456738
TAKSH
CURRENT
SURAT
3452345
-----------------------------------------------------
         YOUR SEARCH RECORD
456738
TAKSH
CURRENT
SURAT
3452345
-----------------------------------------------------
                THANK YOU VISIT OUR BANK !

--------------------------------*/

#include<iostream>

using namespace std;

class Bank{
	public :
			int num;
			char name[100];
			char type[100];
			char branch[100];
			int balance;
			
			void set(){
				
				cout<<"ENTER ACCOUNT NUMBER : "<<endl;
				cin>>num;
				
				cout<<"ENTER ACCOUNT NAME :"<<endl;
				cin>>name;
				
				cout<<"ENTR ACCOUNT TYPE :"<<endl;
				cin>>type;
				
				cout<<"ENTER BRANCH NAME :"<<endl;
				cin>>branch;
				
				cout<<"ENTER YOUR BALENCE :"<<endl;
				cin>>balance;
			}
			
			void get(){
				cout<<num<<endl;
				cout<<name<<endl;
				cout<<type<<endl;
				cout<<branch<<endl;
				cout<<balance<<endl;
			}
};


int main(){
	Bank b;
	cout<<"-----------------------------------------------------"<<endl;
	b.set();
	cout<<endl;
	b.get();
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"\t YOUR SEARCH RECORD "<<endl;
	b.get();
	cout<<"-----------------------------------------------------"<<endl;
	
	cout<<"\t\tTHANK YOU VISIT OUR BANK !"<<endl;
	

}
