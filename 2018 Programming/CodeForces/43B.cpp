#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c = 0,d,e,f,n,m;
    string word, msg;
    getline(cin, word);
    getline(cin, msg);

    n = word.size();
    m = msg.size();

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(msg[i] == ' '){
                c++;
                break;
            }
            if(msg[i] == word[j]){
                c++;
                word[j] = ' ';
                break;
            }
        }
    }
    if(m == c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
