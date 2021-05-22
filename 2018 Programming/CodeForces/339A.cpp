#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;

    cin >> word;
    int i,j,k=0,a,b,c, len = word.size();
    char konik[len] = { 0 };
    char result[len] = { 0 };
    for(i=0; i<len; i++){
        if((i+1)%2==0){

        }else{
            konik[k] = word[i];;
            k++;
        }
    }
    sort(konik,konik+k);
    k  = 0;
    for(i = 0; i<len; i++){
        if((i+1)%2 == 0){
            result[i] = '+';
        }else{
            result[i] = konik[k];
            k++;
        }
        cout<<result[i];
    }
    cout<<endl;


    return 0;
}
