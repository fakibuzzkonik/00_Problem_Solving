#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,g,h,n,m;
    char ch;
    cin >> n;
    int word[n+2][n+2];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> ch;
            if(ch == 'x')
                word[i][j] = 0;
            else
                word[i][j] = 1;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
                c = 0;
                if(word[i+1][j] == 1 && i<n-1)
                    c++;
                if(word[i-1][j] == 1 && i>=1)
                    c++;
                if(word[i][j-1] == 1 && j>=1)
                    c++;
                if(word[i][j+1] == 1 && j<n-1)
                   c++;
           if(c%2 != 0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;


}
