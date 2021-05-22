#include<bits/stdc++.h>
using namespace std;
int main(){

    string word;
    map <char,int> maap ;
    getline(cin, word);
    int i,j,t,a,b,c,len,ans;
    len = word.size();
    //cout<<word<<endl;

    for(i=0; i<len; i++){

        if(word[i] != '{' && word[i] != '}' && word[i] != ',' && word[i] != ' '){
            //cout<<word[i]<<endl;
            maap[word[i]]++;
        }

    }

    cout<<maap.size();
    return 0;
}
