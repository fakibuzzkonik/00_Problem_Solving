#include<bits/stdc++.h>
using namespace std;
int main(){
    string word, text;
    char ch,temp;
    bool twox = false;
    int i,j,t,a,b,c = 0,d = 0,e,f,g,h,n,m;
    cin >> n;
    cin >> ch;
    temp = ch;
    for(i=1; i<n; i++){
        cin >> ch;
        if(ch == 'x'){
            if(twox == true && temp == 'x'){
                c++;
            }else if(temp == 'x'){
                twox = true;
            }
        }else if(twox == true){
            twox = false;
        }
        temp = ch;
    }

    cout<<c<<endl;
    return 0;

}
