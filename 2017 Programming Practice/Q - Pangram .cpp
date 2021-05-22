#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    string word;
    char ch;
    cin >>t;
    cin.ignore();

    for(i=0; i<t; i++){
        cin >> ch;
        if(isupper(ch)){
            ch = tolower(ch);
        }
        if(isalpha(ch)){
            word+=ch;
        }

    }

    set<char>konik;
    for(i=0; i<t; i++){
        konik.insert(word[i]);
    }
    int length = konik.size();

    if(length == 26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
