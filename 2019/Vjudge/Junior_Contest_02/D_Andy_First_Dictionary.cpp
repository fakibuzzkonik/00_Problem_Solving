#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    set<string>set1;
    set<string>::iterator it;
    while(cin >> word){
        string result;
        int len = word.size();
        for(int i = 0; i<len; i++){
            if(word[i] >= (int)'A' && word[i] <= (int)'Z'){
                word[i] = word[i] + 32;
            }

            if(isalpha(word[i])){
                result += word[i];
            }else{
                if(result != "" && result !=" ")
                    set1.insert(result);
                result.clear();
            }
        }
        if(result != "" && result !=" ")
            set1.insert(result);
        result.clear();
        word.clear();
    }
    for(it = set1.begin(); it!= set1.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}
