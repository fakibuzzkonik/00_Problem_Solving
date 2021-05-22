#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t,n,m,a,b,c = 0,temp;
    cin >> n >> m;

    long long save = 0;
    for(i=0; i<m; i++){
        cin>>a;
        if(i==0){
            save = a;
            temp = a;
        }
        else if(temp<a){
            save = save+ a - temp;
            temp = a;
        }
        else if(temp>a){
            save = save+n-temp+a;
            temp = a;
        }
    }
    cout << save-1 <<endl;
    return 0;
}
