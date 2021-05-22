#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c = 0,n,m,k,sum = 0;
    char temp;
    string word;
    cin >> n;
    cin >> word;
    temp = word[0];
    for(i=0; i<n; i++){
        if(word[i] == '0' && word[i+1] =='0' && i!=0){
            cout<<0; i++;
        }
        while(word[i] == '1'){
            c++;
            i++;
            temp = word[i];
        }
        cout<<c;
        c = 0;
    }
    if(word[n-1] =='0')
        cout<<0;
    cout<<endl;
    return 0;
}
