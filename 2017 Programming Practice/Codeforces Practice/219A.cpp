#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word, word2; char ch;
    int i,j,t,a,b,c,n,save1 , save2;
    map<char, int>maap;
    map<char, int>::iterator it;
    cin >> n;
    cin.ignore();
    cin>> word;

    t = word.size();
    for(i=0; i<t; i++){
        ch = word[i];
        maap[ch]++;
    }

    for(i=0; i<n; i++)
        for(j = 0,it = maap.begin(); it!=maap.end(); it++,j++){
            //cout<<save1<<" "<<save2<<endl;
            if(it->second % n != 0){
                cout<<-1<<endl;
                return 0;
            }else{
                int x = it->second/n;
                for(a=0; a<x; a++){
                    word2 += it->first;
                }
            }
        }

    cout<<word2<<endl;
    return 0;
}
