#include<bits/stdc++.h>
using namespace std;
int main(){
    int value;
    while(cin >> value){
        if(value == 0){
            break;
        }
        queue<int>q;

        int i,j,t,a,b,c,d,e,f,k,n,m;
        cout<<"Discarded cards:";
        for(i = 1; i<=value; i++){
            q.push(i);
        }

        while(q.size() > 1){
            cout<<" "<<q.front();
            q.pop();
            int x = q.front();
            q.pop();
                if(!q.empty())
                    cout<<",";
            q.push(x);

        }
        int x = q.front(); q.pop();
        cout<<"\nRemaining card: "<<x<<endl;

    }
    return 0;
}
