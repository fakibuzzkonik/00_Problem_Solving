#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    int i,j,t,n,gate = 0,b,c,count = 0;
    cin >> word;
    int len = word.size();

    for(i=0; i<len-2; i++){
        if(word[i] == 'W' && word[i+1] == 'U' && word[i+2] =='B'){
            if(gate == 0){
                word.erase(i,3);
                gate = 0;
            }
            else{
                word[i+2]=' ';
                word.erase(i,2);
            }
         i--;
        }
        else{
            gate = 1;
        }
    }
    cout<<word<<endl;

    return 0;
}
