#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define     sf           scanf
#define     pf           printf
#define     ln           printf("\n")
#define     mkp(a,b)     make_pair(a,b)
#define     pii          pair<ll,ll>
#define     mem(a,b)     memset(a,b,sizeof a)
#define     pb           push_back
#define     fast         ios_base::sync_with_stdio(false),cin.tie(NULL);
#define     debug(x)     cout<< #x <<" is = "<< (x) << endl;
#define     SZ           100005
//cout.tie(NULL);

//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

typedef unsigned long long ul;

///priority_queue <int>PQMX;
///front
///priority_queue <int, vector<int>, greater<int> >PQMN;
///top
///map<int,int>mp;
///map<int,int>::iterator it;
///queue<int>Q;
///front
///stack<int>S;
///top
///set<int>st;
///insert

int main(){

    int a,b,c = 1,c1 = 0, c2 = 0,result = 0,n,t,i;

    sf("%d%d",&a,&b);
    for(i=1; c>0; i++){
        //cout<<i<<" "<<a <<" "<<b<<endl;
        //else

        if(i%2==0){

            if(b<i){
                pf("Valera "),ln;
                return 0;
            }else{
                b = b - i;
            }
        }else{
            if(a<i){
               pf("Vladik "),ln;
               return 0;
            }else{
                a = a - i;
            }

        }

    }

    return 0;
}













