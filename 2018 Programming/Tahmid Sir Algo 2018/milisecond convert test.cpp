#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  x,ms,s,minute;

    x = 152503889200;

    double result = x % 60;

    x /= 60;
    result = x%60;
    cout<<result<<endl;

}
