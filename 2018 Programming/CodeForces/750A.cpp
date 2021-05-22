#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c = 0,n,m,k;

    cin >> n >> k;
    int remain = 240 -k;

    for(i = 1; i<= n; i++){
        if(remain - i*5 >= 0){
            c++;
            remain = remain - i*5;
        }else{
            break;
        }
    }

    cout<<c<<endl;
    return 0;

}
