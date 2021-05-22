#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i,j,t,a,b,c,five = 0,zero = 0;
    for(i=0; i<n; i++){
        cin >> a;

        if(a == 5)
            five++;
        else
            zero++;
    }
    five = five/9;
    if(zero == 0)
        cout<<-1;
    else if(five == 0)
        cout<<0<<endl;
    else {
        for(i=0; i<five*9; i++)
        cout<<5;
        for(i=0; i<zero; i++)
            cout<<0;
        cout<<endl;
    }


    return 0;


}
