#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b%a == 0)
        return a;

    if(a>b)
        swap(a,b);

    int temp = b%a;
    a = b/a;
    b = temp;
    return gcd(a,b);
}
int main()
{
    int i,j,t,a,b,c,d,e,f,temp;
    cin >> a >> b;
    cout<<gcd(a,b)<<endl;
}
