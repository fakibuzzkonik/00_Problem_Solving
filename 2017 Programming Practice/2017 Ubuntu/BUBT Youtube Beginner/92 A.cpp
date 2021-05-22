#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,m,a,b,c = 0,save = 0;
    cin >> n >> m;
    while(1){
        //cout<<"konik"<<endl;
        for(i=1; i<=n; i++){
            if(i == n)
                save = 1;
            else
                save = i+1;

            b = m-i;
            //cout<<b<<" z "<<save<<endl;
            if(b >= save){
                //cout<<b<<" z "<<save<<endl;
                m = m - i;
            }
//              else if(m - i == 0){
//                cout<<0<<endl;
//                return 0;
//            }
            else{
                cout<<m-i<<endl;
                return 0;
            }
        }
    }

}
