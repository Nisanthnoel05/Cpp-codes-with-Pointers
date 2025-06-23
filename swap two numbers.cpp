#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	int *p=&a;
	int *l=&b;
	c=*p;
	*p=*l;
	*l=c;
	cout<<a<<""<<b;
	return 0;	
}
