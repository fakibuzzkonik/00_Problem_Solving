#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,t,a,b,c,len;
    string number;
    while(cin >> number && number != "0"){
        i = 0, j = 0;
        len = number.size();
        for(i=1; i<=len; i++){
            j = 10*j+ (number[i-1] - '0');
            j = j % 17;
        }
        if(j == 0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
