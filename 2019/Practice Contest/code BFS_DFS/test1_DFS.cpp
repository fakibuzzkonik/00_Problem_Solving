
#include<bits/stdc++.h>
using namespace std;
char grid[23][23];
int pos_i,pos_j;
int vis[23][23];
int xx[4] = {0,0,1,-1};
int yy[4] = {1,-1,0,0};
int x,y;

int res;
void DFS(int i, int j){

    if(vis[i][j] == 1) return;
        vis[i][j] = 1;

    if(grid[i][j] == '.'  || grid[i][j] == '@' ){
        res++;
        for(int ii=0; ii<4; ii++){ ///shortcut
            x = i+xx[ii];
            y = j+yy[ii];
            DFS(x,y);
        }
//        res++;
//        ///right
//        x = i;
//        y = j + 1;
//        DFS(x,y);
//        ///left
//        x = i;
//        y = j - 1;
//        DFS(x,y);
//        ///up
//        x = i - 1;
//        y = j;
//        DFS(x,y);
//        ///right
//        x = i + 1;
//        y = j;
//        DFS(x,y);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int i,j,n,m,k,a,b,c;
        char ch;
        cout<<"TYPE COLLOM AND ROW"<<endl;
        cin >> m >> n;
        for(i = 0; i<n; i++){
            for(j=0; j<m; j++){
                cin >> ch;
                grid[i][j] = ch;
                if(ch == '@'){
                    pos_i = i;
                    pos_j = j;
                }
            }
        }
        DFS(pos_i,pos_j);
        cout<<"TOTAL "<<res<<endl;;
        cout<<"THANKS FOR INPUT"<<endl;
    }

}
