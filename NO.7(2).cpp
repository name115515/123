#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int a,b,s;
	a=15;
	b=3;
	s=a-b;
	cout<<setw(5)<<a<<endl;
	cout<<setw(2)<<'-'<<setw(3)<<b<<endl;
	cout<<"-------"<<endl;
	cout<<setw(5)<<s<<endl;
	return 0;
}
