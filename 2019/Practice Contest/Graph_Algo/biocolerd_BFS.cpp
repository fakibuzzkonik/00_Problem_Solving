#include<bits/stdc++.h>
using namespace std;
char grid[203][203];
int pos_i,pos_j;
int vis[203][203];
int BFS(vector<vector<int>> s){

    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int i,j,k,l,n,m,a,b,c,d;
        cin >> n;
        vector<int>node[100000];
        int color[10000];
        memset(color,-1,sizeof(color));
        for(i = 0; i<n; i++){
            cin >> a >> b;
            node[a].push_back(b);
            node[b].push_back(a);

        }
  ///      int f = BFS(node, color);

        int f = 0;
        queue<int>word;
        word.push(0);
        color[0] = 0;
        while(!word.empty()){
            int x = word.front();
            word.pop();
            int limit = node[x].size();
            for(int i = 0; i<limit; i++){
                int now = node[x][i];
                if(color[now] == -1){

                    if(color[x] == 0){
                        color[now] = 1;
                    }else{
                        color[now] = 0;
                    }
                    word.push(node[x][i]);
                    cout<<"Pushing "<<node[x][i]<<endl;
                }else{
                    if(color[now] == color[x]){
                        f = 1;
                        break;
                    }
                }
            }
            if(f == 1){
                break;
            }

        }
        if(f==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
    }
}
