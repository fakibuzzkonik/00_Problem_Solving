#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int i,a=0,b=0,len = word.size();

    for(i=0; i<word[i]; i++){
        if(isupper(word[i])){
            a++;
        }else if(islower(word[i])){
            b++;
        }
    }

    if(a>b){
        for(i=0;i<len; i++){
            word[i] = toupper(word[i]);
        }

    }else if(a == b){
        for(i=0; i<len; i++){
            word[i] = tolower(word[i]);
        }
    }else if(a<b){
        for(i=0; i<len; i++){
            word[i] = tolower(word[i]);
        }
    }
    cout<<word<<endl;
    return 0;
}
