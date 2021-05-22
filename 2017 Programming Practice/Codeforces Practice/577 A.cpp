#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,a,b,c = 0,t,n,m;
    cin >> n >> m;

    for(i=1; i<=n; i++){
        if( m <= i*n){
            if(m%i == 0){
                //cout << m << " " << i <<endl;
                c++;
            }
        }
    }
    cout<<c<<endl;
}
