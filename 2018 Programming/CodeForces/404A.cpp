#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,t,a,b,c = 0,n,m;
    char ch,save,other;
    bool gate = true;
    cin >> n;
    char word[n+1][n+1];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> ch;
            if(i == 0 && j == 0)
                save = ch;
            else if(i == 0 && j == 1)
                other = ch;
            else{
                //goto noo;
                if(ch!= save && ch != other){
                     //cout<<"NO"<<endl;
                     // return 0;
                     goto noo;
                }
            }
            word[i][j] = ch;
        }
    }

    if(save == other){
        cout<<"NO"<<endl;
        return 0;
    }

    for(i=0,j=n-1; i<n/2; i++,j--){
        //cout<<i<<i<<" "<<i<<j<<" "<<j<<i<<" "<<j<<j<<endl;
        if(word[i][i] == save && word[i][j] == save && word[j][i] == save && word[j][j] == save){
            //c++;
        }else{
            cout<<"NO"<<endl;
            return 0;

        }
        for(k=0; k<n; k++){
            if(k!= i && k!=j){
                //cout<<word[i][k]<<endl;
                //cout<<word[j][k]<<endl;
                if(word[i][k] != other){
                    cout<<"NO"<<endl;
                    return 0;
                }
                if(word[j][k] != other){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }


    }
    for(k=0; k<n; k++){
        //cout<<word[n/2][k]<<endl;
        if(n/2 == k){

        }else if(word[n/2][k] != other){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(word[(n/2)][(n/2)] == save){
        cout<<"YES"<<endl;
        return 0;
    }else{
        cout<<"NO"<<endl;
        return 0;
    }

    noo:
        cout<<"NO"<<endl;
        return 0;
}

