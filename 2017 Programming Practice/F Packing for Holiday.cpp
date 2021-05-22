#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;

    cin >> t;
    for(i=0; i<t; i++){
        cin >> a >> b >> c;
        if(a <= 20 && b<= 20 && c<= 20)
            printf("Case %d: good",i);
        else{
            printf("Case %d: bad",i);
        }
    }
    return 0;
}
