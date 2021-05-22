#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    string english;
    map<char, char>maap;
    map<char, char>::iterator it = maap.begin();

    cin >> word;
    cin >> english;
    int i,j,t,len,a,b,c,n,m,k;
    len = word.size();

    for(i=0; i<len; i++){
        //cout<< word[i] <<" "<< english[i]<<endl;
        maap[word[i]] = english[i];
    }
    word.erase();
    cin >> word;
    len = word.size();
    for(i=0; i<len; i++){
        if(isalpha(word[i])){
            if(islower(word[i])){
                it = maap.find(word[i]);
                cout<<(*it).second;
            }else{
                it = maap.find(tolower(word[i]));
                char ch = (*it).second ;
                ch = toupper(ch);
                cout<<ch;
            }

        }else{
            cout<<word[i];
        }
    }
    cout<<endl;

    return 0;



}
