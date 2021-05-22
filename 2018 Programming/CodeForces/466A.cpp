#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,c,d,e,f,g,n,m,k,l,o,p,sum = 0;
    double a,b;
    cin >> n >> m >> a >> b;
        ///10   3    5    1
    if(b/m < a){
        int aa = a, bb = b;
        if(m>=n){
            cout<< min(bb, n*aa) <<endl;
            return 0;
        }

        c = n / m;
        k = c * bb; // price
        d = n - c * m;
        e = d * aa; //price

        f = min(e,bb);
        cout<< k + f<<endl;
    }else{
        c = n*a;
        cout<< c <<endl;
    }
    return 0;
}
