#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    vector<string>vec;

    while(getline(cin,word) && word != "*"){
        int len,i,j,t,a,b,c;
        char ch = word[0];
        if(isupper(ch))
            ch = tolower(ch);
        len = word.size();
        bool gate = true;
        for(i=0; i<len; i++){
            if(word[i] == ' '){
                if(isupper(word[i+1]))
                    word[i+1] = tolower(word[i+1]);

                if(word[i+1] == ch || word[i+1] == ch+32){

                }else{
                    gate = false;
                }
            }
        }
        if(gate) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
}
