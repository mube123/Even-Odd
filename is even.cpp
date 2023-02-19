#include<iostream>
using namespace std;
int is_even(int);
int main()
{
	int n;
	is_even(n);	
}
int is_even(int)
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n%2==0)
		cout<<"Even";
	else
		cout<<"Odd";
}
