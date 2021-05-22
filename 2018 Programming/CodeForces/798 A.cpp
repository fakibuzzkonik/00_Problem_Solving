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

    int n,t,k,d,i,j, a,b,c,c1 = 0,c2 = 0,total= 0, result2 = 0, t1,t2;

                    //8  6  4  5
    sf("%d %d %d %d",&n,&t,&k,&d);

    if(n<=k){
        pf("NO"),ln;
        return 0;
    }

    int cakedmade ;        //needed

            cakedmade = k+ d/t * k;
            if(cakedmade<n)
                pf("YES"),ln;
            else if(cakedmade>=n)
                pf("NO"),ln;

     return 0;

//    if(t>=d)
//        cakemadefinaltime = (n/k)* t/2  + t;
//    else
//        cakemadefinaltime = (n/k)* t/2  + d;
//
//    cout << "Cake made final time "<< cakemadefinaltime <<endl;
//
//    if((n/k)*t <= cakemade1totaltime){
//        pf("NO"),ln;
//        return 0;
//    }else
//        pf("YES"),ln;

//    return 0;
}













