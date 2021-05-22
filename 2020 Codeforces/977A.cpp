#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,m,n,a,b,c,num,cnt;

    long number;
    cin >> number >> n;

    while(n--){
        if(number%10 != 0){
            number--;
        }else{
            number = number/10;
        }
    }
    cout<<number<<endl;
    return 0;
}
