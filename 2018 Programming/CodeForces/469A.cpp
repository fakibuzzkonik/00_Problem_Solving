#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,bb,c,n,m,k,l,p,q;
    map<int,int>maap;
    map<int,int>::iterator it;
    ///input data
    ///4
    ///3 1 2 3
    ///2 2 4
    scanf("%d",&n);
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%d",&p);
        maap[p] = 1;
    }
    scanf("%d",&bb);
    for(i=0; i<bb; i++){
        scanf("%d",&q);
        maap[q] = 2; ///last value save hoy na maap ey ??
    }

    m = maap.size();


    if(m == n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
