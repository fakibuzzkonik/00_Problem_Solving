#include<bits/stdc++.h>
using namespace std;
int main(){
    string wordx,wordz,ans;
    int i,j,t,a,b,c,len1,len2;
    cin >> wordx >> wordz;
    len1 = wordx.size();
    for(i=0; i<len1; i++){
        if(wordx[i] < wordz[i]){
           cout<<-1<<endl;
           return 0;
        }else if(wordx[i] > wordz[i]){
            ans += wordz[i];
        }else if(wordx[i] == wordz[i]){
            ans += 'z';
        }
    }

    cout<<ans<<endl;
    return 0;
}
