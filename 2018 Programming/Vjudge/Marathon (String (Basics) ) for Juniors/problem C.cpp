#include<bits/stdc++.h>
using namespace std;
int main(){
    string word, text;
    int i,j,t,a,b,c,d = 0,e,f,g,h,n,m;
    cin >> word;
    int len = word.size();
    bool palindrome = true;
    for(i=0,j=len-1; i<len/2; i++,j--){
       // cout<<word[i]<<" "<<word[j]<<endl;

        if(len%2 == 0){
            if(word[i] == word[j]){

            }else{
                palindrome = false;
                break;
            }
        }else if(i != j){
            if(word[i] == word[j]){

            }else{
                palindrome = false;
            }
        }

    }

    if(palindrome == false){
        cout<<len<<endl;
        return 0;
    }else{
        int k = 1;
        while(palindrome == true && k <= len){
            i = k;
            d = 0;
            int len2 = len - i;
            for(j=len-1; i<len2; i++,j--){
               //cout<<word[i]<<" "<<word[j]<<endl;
               if(len2%2 == 0){
                    if(word[i] == word[j]){
                        d++;
                    }else{
                        palindrome = false;
                        break;
                    }
                }else if(i != j){
                    if(word[i] == word[j]){

                    }else{
                        palindrome = false;
                        break;
                    }
                }

            }
            if(palindrome == false){
                cout<<len-k<<endl;
                return 0;
            }k++;
        }
        if(palindrome == true){
            cout<<0<<endl;
        }else
            cout<<len-i<<endl;
    }
    return 0;
}
