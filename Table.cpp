#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter any no for Table : ";
	cin>>a;
	cout<<"Enter the Range of Table : ";
	cin>>b;
	for(int i=1;i<=b;i++){
		cout<<a<<"\tx\t"<<i<<"\t=\t"<<a*i<<endl;
	}
	return 0;
}
