#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n;
    cin >> n;
    vector<int>vec;
    string word;
    for(i = 0; i<n; i++){
        cin >> word;
        int len = word.size();
        if(len>10){
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        }else{
            cout<<word<<endl;
        }
    }
}
