#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,o,p,a,b,c,x,y,z;
    cin >> n;
    n++;

    p = 1;
    for(i=1; i<=n; i++){
        for(j=n-i; j>0; j--){
            cout<<"  ";
        }
        for(k=0; k<i; k++){
            if(k == 0)
                cout<<k;
            else
                cout<<" "<<k;
        }
        for(k = k-2; k>=0; k--){
            cout<<" "<<k;
        }
        cout<<endl;
    }
    for(i=1; i<n; i++){
        for(j=n-i; j<n; j++){
            cout<<"  ";
        }
        for(k=0; k<n-i; k++){
            if(k == 0)
                cout<<k;
            else
                cout<<" "<<k;
        }
        for(k=k-2; k>=0; k--){
            cout<<" "<<k;
        }
        if(i<n-1){
            cout<<endl;
        }
    }
    return 0;
}
