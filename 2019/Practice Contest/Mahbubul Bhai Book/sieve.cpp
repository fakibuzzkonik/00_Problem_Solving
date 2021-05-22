#include<bits/stdc++.h>
using namespace std;
int Prime[300000], nPrime;
int mark[1000002];

void sieve(int n){
    int i,j, limit = sqrt(n*1.0) + 2;
    ///1 is not prime so mark it as 0;
    mark[1] = 1;
    ///all the even numbers are not prime except 2
    for(i = 4; i<limit; i += 2){
        mark[i] = 1;
    }
    Prime[nPrime++] = 2;    ///nPrime = 0 ///prime[0] = 2 ///nPrime = 1;
    for(i = 3; i<=n ;  i+=2){
        if(!mark[i]){
            cout<<" "<<i;
            Prime[nPrime++] = i;    ///i is a prime, so we save it;
            if(i<=limit){
                for(j=i*i; j<=n; j += i*2){

                    mark[j] = 1;
                }
            }

        }
    }
    cout<<endl;
}
int main(){

    int i,j,t,a,b,c,number,value,result;
    cin >> number;
    sieve(number);

    cout<<"Total Prime " << nPrime<<endl;
    cout<<"All Prime Numbers : "<<endl;
    for(i = 0 ; i<nPrime; i++){
        cout<<Prime[i]<<" ";
    }

}
