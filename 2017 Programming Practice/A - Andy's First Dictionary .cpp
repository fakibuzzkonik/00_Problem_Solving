#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    string word,next;
    vector<string>konik;
    while(cin>>word){
        int len = word.size();
        for(i=0; i<len; i++)
        {

            if(isalpha(word[i])){
                if(isupper(word[i])){
                    next+=tolower(word[i]);
                }
                else
                    next+=word[i];
            }
        }
        konik.push_back(next);
        next.clear();
    }
    int length = konik.size();

    set<string>maa;
    set<string>:: iterator it;

    for(i=0; i<length; i++){
        if (konik[i] != ""){
            maa.insert(konik[i]);
        }
    }
    for(it = maa.begin(); it!=maa.end(); it++){
        cout<<(*it)<<"\n";
    }
    return 0;
}
