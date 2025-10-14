#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"enter a and b values:";
	cin>>a>>b;
	cout<<"enter a valid operator:";
	cin>>ch;
	switch(ch)
	{
		case'+':cout<<a+b;
		         break;
		case'-':cout<<a-b;
		         break;
		case'*':cout<<a*b;
		         break;
		case'/':cout<<a/b;
		          break;
		case'%':cout<<a%b;
		          break;
		default:cout<<"invalid operator";        
	               break;
	}
}
