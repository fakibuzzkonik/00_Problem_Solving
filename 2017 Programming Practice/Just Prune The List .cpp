#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,x,a,b,count = 0,d,red = 0,gate = 1,answer = 0;

    cin>>t;
    while(t--){
        answer = 0;
        map<int, int>konik;
        map<int, int>:: iterator it;
        cin >> a >> b;
        for(i=0; i<a; i++){
            cin >> x;
            konik[x]++;
        }
        for(i=0; i<b; i++){
            cin >> x;
            konik[x]--;
        }

        for(it = konik.begin(); it!=konik.end(); it++){
            answer += abs ((*it).second);
        }
        cout << answer <<endl;

    }
}
