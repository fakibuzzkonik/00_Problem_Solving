#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    string word;
    string next;
    vector<string>konik;
    while(cin>>word){
        int len = word.size();
        for(i=0; i<len; i++)
        {
            if(isalpha(word[i])){
                next+=word[i];
            }
            else{
                konik.push_back(next);
                next.clear();
                continue;
            }
        }
        konik.push_back(next);
        next.clear();
    }
    int length = konik.size();
    for(i=0; i<length; i++){
        transform(konik[i].begin(), konik[i].end(), konik[i].begin(), ::tolower);


      }
    map<string, int>maa;
    map<string, int>:: iterator it;

    for(i=0; i<length; i++){
        maa[konik[i]]++;
    }
    int mlength = maa.size();
    for(it = maa.begin(); it!=maa.end(); it++){
            if((it-> first) != ""){
            cout<<it -> first<<endl;
        }
    }

}
