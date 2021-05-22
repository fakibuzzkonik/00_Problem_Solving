#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    string word;
    string word2;

    getline(cin,word);
    int length = word.size();

    for(i=0; i<length; i++){
        if(isalpha(word[i])){
            word2+=word[i];
        }
    }
    length = word2.size();
    set<char>konik;
    for(i=0; i<length; i++){
        konik.insert(word2[i]);
    }

    length = konik.size();

    cout<<length<<endl;

    return 0;
}
