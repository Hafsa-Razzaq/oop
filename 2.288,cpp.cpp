#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter 5 Digit integer:\n";
	cin>>num;
	cout<<num/10000<<"   ";
	num=num%10000;
	cout<<num/1000<<"   ";
	num=num%1000;
	cout<<num/100<<"   ";
	num=num%100;
	cout<<num/10<<"   ";
	num=num%10;
	cout<<num/1<<"   ";
	return 0;
}
