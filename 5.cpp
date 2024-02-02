/*5. Write a Program to handle ambuigity error in Hybrid inheritance.
NUM 1
7
NUM 2
8
NUM 3
6
NUM 4
7
SUM OF ALL NUMBERS : 29

*/

#include<iostream>

using namespace std;

class A{
	public :
	int n;
	public :
	void a1(){
		cout<<"NUM 1"<<endl;
		cin>>n;
			}
};

class B : public A
{
	public :
	int b;
	public :
	void a2(){
		cout<<"NUM 2"<<endl;
		cin>>b;
			}
};
class C : public A
{
	public :
	int c;
	public :
	void a3(){
		cout<<"NUM 3"<<endl;
		cin>>c;
			}
};
class D : public B,public C
{
	public :
	int d,sum=0;
	public :
	void a4(){
		cout<<"NUM 4"<<endl;
		cin>>d;	
			}

};
int main(){
	int sum=0;
	D d;
	d.B::a1();
	d.a2();
	d.a3();
	d.a4();
	sum=d.B::b+d.b+d.c+d.d;
	cout<<"SUM OF ALL NUMBERS : "<<sum<<endl;
	return 0;
}

				

