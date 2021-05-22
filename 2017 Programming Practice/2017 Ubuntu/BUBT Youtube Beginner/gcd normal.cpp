
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,d,e,f,temp;
    cin >> a  >> b;

    if(a>b)
        swap(a,b);

    while(b%a != 0){
        temp = b;
        b = b%a;
        a = temp/a;

        swap(a,b);
    }

    cout<< a << endl;
}
