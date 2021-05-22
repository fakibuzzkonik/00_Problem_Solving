#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,n,m,k,l,o,p,sum = 0;
    string word1,word2;
    map<char,char>maap;
    map<char,char>::iterator it;

    cin >> word1 ;
    cin >> word2 ;
    n = word1.size();
    for(i=0; i<n; i++){
        if(word1[i] == '1' && word2[i] == '0')
            cout<<'1';
        else if(word1[i] == '0' && word2[i] == '1')
            cout<<'1';
        else if(word1[i] == '0' && word2[i] == '0')
            cout<<'0';
        else if(word1[i] == '1' && word2[i] == '1')
            cout<<'0';
    }
    cout<<endl;
}
