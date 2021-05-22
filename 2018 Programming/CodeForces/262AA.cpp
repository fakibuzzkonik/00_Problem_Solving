#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,t,a,b,c,n,m,k,l = 0;
    string word;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> word;
        k = 0;
        t = word.size();
        for(j=0; j<t; j++){
            if(word[j] == '4' || word[j] == '7'){
                k++;
            }
        }
        if(k<=m){
            l++;
        }
    }

    cout<<l<<endl;
    return 0;
}
