///first char & last char same hote hobe and r kuno posstion thakte parbe na
///first and last character chara baki sob character 'a' hote hobe
/// b ektana 3bar thakte parto na

#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    bool even = false;

    cin >> word;
    cin.ignore();
    int len = word.size();
    if(len%2 == 0)
        even = true;
    else
        even = false;

    int i,j,t,a,b,c = 0,d = 0,e,f,g,h,n,m,k;

    if(word[0] == 'b' && word[len-1] == 'b'){

        for(i=1; i<len/2; i++){
            if(word[i] == 'b' || word[len-i-1] == 'b'){
                cout<<"Same as first char"<<endl;
                return 0;
            }
            if(word[i] == word[len-i-1] && word[i] == 'a'){

            }else{
                cout<<"Char Not Same"<<endl;
                return 0;
            }

        }
    }else{
        cout<<"front char not b"<<endl;
        return 0;
    }

    if(even == false){
        if (word[(len)/2] == 'a'){
            cout<<"ACCEPTED"<<endl;
            return 0;
        }else{
            cout<<"a is not at middle"<<endl;
            return 0;
        }
    }else{
        cout<<"ACCEPTED"<<endl;
        return 0;
    }


}
