#include<iostream>
using namespace std;
int main()
{
    int a,b,c,min;
    cout<<"a b c=";
    cin>>a>>b>>c;
    if (a<=b&&a<=c)
    {
        min=a;
    }
    if (b<=a&&b<=c)
    {
        min=b;
    }
    if (c<=a&&c<=b)
    {
        min=c;
    }
    cout<<"min="<<min<<endl;
    return 0;
}
