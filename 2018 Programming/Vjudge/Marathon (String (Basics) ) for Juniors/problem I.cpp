#include<bits/stdc++.h>
using namespace std;
int main(){
    string word, text;
    int i,j,t,a,b,c = 0,d = 0,e,f,g,h,n,m;
    cin >> word;
    int len = word.size();
    for(i=0; i<len; i++){
        if(isupper(word[i])){
            c++;
        }
    }

    cout<<c+1<<endl;
    return 0;

}
