#include<bits/stdc++.h>
using namespace std;
int main(){
    string word, text,ans;
    unordered_map<string,int>maap;
    char ch,temp;
    bool twox = false;
    int i,j,t,a,b,c = 0,d = 0,e,f,g,h,n,m;
    cin >> n;
    cin >> ch;
    temp = ch;
    for(i=1; i<n; i++){
        cin >> ch;
        word = string(1,temp) + string(1,ch);
        //cout<<word<<endl;
        maap[word]++;
        temp = ch;
    }
    int max = INT_MIN;
    for(auto it:maap){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second>max){
            ans = it.first;
            max = it.second;
        }
    }

    cout<<ans<<endl;
    return 0;
}
