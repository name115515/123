#include <iostream>
using namespace std;
int main()
{
	int  n,a,b;
	cout<<"请输入一个两位数：";
	cin>>n;
	a=n/10;
	b=n%10;
	n=b*10+a;
	cout<<n<<endl;
	return 0;
}