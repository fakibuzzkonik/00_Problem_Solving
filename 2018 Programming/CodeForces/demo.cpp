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

    int len,i,j,t,a,b,c,c1 = 0,c2 = 0 ,n;
    char word[15];
    sf("%s",word);
    //pf(word);ln;
    len = strlen(word);

    for(i=0,j=len-1; i<len/2; i++,j--){
        cout<<word[i]<<" "<<word[j]<<endl;
        if(word[i] != word[j]){
            c1++;

        }
    }

    if(c1 == 1)
        pf("YES"),ln;
    else if(c1 == 0 && len %2 != 0)
        pf("YES"),ln;
    else
        pf("NO"),ln;

    return 0;
}













