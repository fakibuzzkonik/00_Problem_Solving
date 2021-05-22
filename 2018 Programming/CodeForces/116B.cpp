#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c = 0,n,m,o,p,q,r;
    char ch;

    cin >> n >> m;
    char table[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> ch;
            if(ch == 'P' && table[i][j-1] =='W' && j!=0){
                table[i][j-1] = '.';
                table[i][j] = '.';
                c++;

            }else if(ch == 'W' && table[i][j-1] =='P' && j!=0){
                table[i][j-1] = '.';
                table[i][j] = '.';
                c++;
            }else{
                table[i][j] = ch;
            }
            ///try for collam
            if(ch == 'P' && table[i-1][j] =='W' && i!=0){
                table[i-1][j] = '.';
                table[i][j] = '.';
                c++;
            }else if(ch == 'W' && table[i-1][j] =='P' && i!=0){
                table[i-1][j] = '.';
                table[i][j] = '.';
                c++;
            }
        }
    }

//    for(i=1; i<n; i++){
//        for(j=0; j<m; j++){
//            ch = table[i][j];
//            if(ch == 'P' && table[i-1][j] =='W'){
//                table[i-1][j] = '.';
//                table[i][j] = '.';
//                c++;
//            }else if(ch == 'W' && table[i-1][j] =='P'){
//                table[i-1][j] = '.';
//                table[i][j] = '.';
//                c++;
//            }else{
//                //table[i][j] = ch;
//            }
//        }
//    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<table[i][j];
        }cout<<endl;
    }

    cout<<c<<endl;
    return 0;

}
