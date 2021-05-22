#include<bits/stdc++.h>
using namespace std;
int main(){
    string word, text,ans;
    unordered_map<string,int>maap;
    char ch,temp;
    bool twox = false;
    int i,j,t,a,b,c = 0,d = 0,e,f,g,h,n,m;
    cin >> n;
    for(i=0; i<n; i++){
        cin>> word;
        if(word[0] == 'I'){
            c = c + 20;
        }else if(word[0] == 'D'){
            c += 12;
        }else if(word[0] == 'O'){
            c += 8;
        }else if(word[0] == 'C'){
            c += 6;
        }else if(word[0] == 'T'){
            c += 4;
        }
    }

    cout<<c<<endl;
    return 0;

}
