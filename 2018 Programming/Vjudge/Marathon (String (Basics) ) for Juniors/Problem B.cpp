
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,len;
    string word;
    cin >> word;
    len = word.size();
    if(len<3){
        cout<<"No"<<endl;
        return 0;
    }

    for(i=0; i<len-2; i++){
        if(word[i] == 'A'){
            if((word[i+1] == 'B' && word[i+2] == 'C') || (word[i+1] == 'C' && word[i+2] == 'B')){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        if(word[i] == 'B'){
            if((word[i+1] == 'A' && word[i+2] == 'C') || (word[i+1] == 'C' && word[i+2] == 'A')){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        if(word[i] == 'C'){
            if((word[i+1] == 'A' && word[i+2] == 'B') || (word[i+1] == 'B' && word[i+2] == 'A')){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;

}
