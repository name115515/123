#include<iostream>
using namespace std;
int main()
{
    bool flag;
    int n;
    cin>>n;
    if(n%2==0)flag=true;
    else flag=false;
    if (flag)
    {
        cout<<"yes";
    }
    else
    {
        cout <<"no";
    }
    return 0;
}
