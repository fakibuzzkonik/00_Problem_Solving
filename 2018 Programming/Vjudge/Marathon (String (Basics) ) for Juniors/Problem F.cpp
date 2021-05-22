
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char>sset;
    set<char>::iterator it;
    set<string>mainset;
    int i,j,t,a,b,c,d,e,f,len,n,m;
    char ch;
    string word,save;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> word;
        len = word.size();
        for(j=0; j<len; j++){
            ch = word[j];
            sset.insert(ch);
        }
        //cout<<word<<" "<<sset.size() <<" "<< len<<endl;

        int len2 = sset.size();
        for(it = sset.begin(); it!=sset.end(); it++){
            save += *it;
        }
        cout<<save<<endl;
        mainset.insert(save);
        save.clear();
        sset.clear();
    }

    cout<<mainset.size()<<endl;
    return 0;
}
