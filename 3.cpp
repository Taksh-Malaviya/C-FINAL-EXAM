/*3. Give an example which shows Exception handling of division by zero exception.
CAN NOT DEVIDE BY 0....*/

#include<iostream>
using namespace std;

int main(){
	int a=4;
	int b=0;
	int c;
	
	try{
	if(b==0){
		throw 4;
	}else{
		c=a/b;
		cout<<c<<endl;
	}
}
	catch(...){
		cout<<"CAN NOT DEVIDE BY 0...."<<endl;
	}
return 0;	

}
