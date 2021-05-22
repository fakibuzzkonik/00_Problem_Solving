
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f;
    string word;
    cin >> word;
    char ch ;
    int len = word.size();
    for(i=0; i<len-1; i++){
        ch = word[i];
        if(ch == 'n'){

        }else if(ch != 'a' && ch != 'e' && ch != 'i' && ch!='o' &&  ch!='u'){
            if(word[i+1] == 'a' || word[i+1] == 'e' ||word[i+1] == 'i' ||word[i+1] == 'o' ||word[i+1] == 'u' ){

            }else {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    ch = word[len-1];
    if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'n'  ){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
