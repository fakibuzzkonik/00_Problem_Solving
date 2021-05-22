#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,d,e,f,g,h,n,m, art = 1, gate = 0;
    cin >> n >> m;
    for(i=1; i<=n; i++){
        for(j=0; j<m; j++){
            if(i%2 != 0){
                cout<<"#";
            }else if(j == m-1 && art != i && gate == 0){
                cout<<"#"; art = i; gate = 1;
            }else if(j == 0 && art != i && gate ==1){
                cout<<"#"; art = i; gate = 0;
            }else if(i%2 == 0){
                cout<<".";
            }
        }cout<<endl;
    }
}
