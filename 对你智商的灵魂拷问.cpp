#include<iostream>
using namespace std;
int main()
{
    int iq;
    cout<<"IQ:";
    cin>>iq;
    if (iq>=200)
    {
        cout<<"禁止职业选手参赛";
    }
    else if (iq>140,iq<200)
    {
        cout<<"你他娘的还真是个天才——李云龙";
    }
    else if (iq<=140)
    {
        cout<<"智商堪忧——鲁迅《我没说过这些话》";
    }
    return 0;
}