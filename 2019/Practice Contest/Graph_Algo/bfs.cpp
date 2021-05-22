#include<bits/stdc++.h>
using namespace std;
int main(){

    int node ,edge,i,j,t,a,b,c,n,m,s;
    cout<<"TYPE NODE & EDGE >> ";
    cin >> node >> edge;
    //list<int> adj;
    //adj = new list<int>[node];
    vector< vector < int > >adj[node][edge] ;
    for(i = 0; i<node; i++){
        for(j=0; j<edge; j++){
            cout<<adj[i][j] <<' ';
        }cout<<endl;
    }

    bool visited[node];
    for(i=0; i<node; i++)
        visited[i] = false;

    list<int>queue;

    for(i=0; i<edge; i++){
        cin >> a >> b;
        adj[a].push_back(b);
    }
    cout<<"Type Starting Node ";
    cin >> s;
    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty()){
        s = queue.front();
        cout<< s << " " <<endl;
        queue.pop_front();
        int len = vec[s].size();
        for (i = 0; i < len ; ++i) {
            int value = vec[s][i];
            if(!visited[value]){
                visited[value] =true;
                queue.push_back(value);
            }
        }
    }
}
