#include<iostream>
using namespace std;
int main(){
	int a=10;
	int &x=a;
	cout<<a<<endl;
	cout<<x<<endl;
	x=11;
	int *p;
	p=&a;
	cout<<x<<endl;
	cout<<*p;
	cout<<endl;
	cout<< *p+2;
	cout<<"thanks for learning with us"
	return 0;
	
}
