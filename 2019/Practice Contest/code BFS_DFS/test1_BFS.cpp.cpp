#include<bits/stdc++.h>
using namespace std;
char grid[23][23];
int pos_i,pos_j;
int vis[23][23];
int BFS(int i, int j){
    vis[i][j] = 1;
    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    int cnt = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int temp_i,temp_j;
        ///right
        temp_i = x;
        temp_j = y+1;
        if(!vis[temp_i][temp_j]  && grid[temp_i][temp_j] == '.'){
            q.push(make_pair(temp_i,temp_j));
            vis[temp_i][temp_j] = 1;
            cnt++;
        }

        ///left
        temp_i = x;
        temp_j = y-1;
        if(!vis[temp_i][temp_j]  && grid[temp_i][temp_j] == '.'){
            q.push(make_pair(temp_i,temp_j));
            vis[temp_i][temp_j] = 1;
            cnt++;
        }
        ///up
        temp_i = x-1;
        temp_j = y;
        if(!vis[temp_i][temp_j]  && grid[temp_i][temp_j] == '.'){
            q.push(make_pair(temp_i,temp_j));
            vis[temp_i][temp_j] = 1;
            cnt++;
        }
        ///down
        temp_i = x+1;
        temp_j = y;
        if(!vis[temp_i][temp_j]  && grid[temp_i][temp_j] == '.'){
            q.push(make_pair(temp_i,temp_j));
            vis[temp_i][temp_j] = 1;
            cnt++;
        }




    }
    return cnt;
}

int main(){
    int i,j,t,n,m,k,a,b,c;
    char ch;
    cin >> t;
    while(t--){
        cout<<"TYPE COLLOM AND ROW"<<endl;
        cin >> m >> n;
        for(i = 0; i<n; i++){
            for(j=0; j<m; j++){
                cin >> ch;
                if(ch == '.')
                grid[i][j] = ch;
                if(ch == '@'){
                    pos_i = i;
                    pos_j = j;
                }
            }
        }
        cout<<"TOTAL "<<BFS(pos_i,pos_j)<<endl;;
        cout<<"THANKS FOR INPUT"<<endl;
    }

}
