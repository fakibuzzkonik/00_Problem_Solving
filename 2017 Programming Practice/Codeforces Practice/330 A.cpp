#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,n,a,b;


    char ch;
    cin >> a >> b;
    int array[a][b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> ch;
            if(ch == 'S'){

                array[i][j] = 1;
            }
            else{
                array[i][j] = 0;
            }
        }
    }


    int count = 0,cap = 0;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(array[i][j] != 1){
                count++;
            }
            else if(array[i][j] == 1){
                break;
            }
        }
        if(count == b){
            for(j=0; j<b; j++){
                if(array[i][j] != 2)
                {
                    array[i][j] = 2;
                    cap++;
                }
            }
        }
        count = 0;
    }
    count = 0;
    for(j=0; j<b; j++){
        for(i=0; i<a; i++){
            if(array[i][j] != 1){
                count ++;
            }
        }
        if(count == a){
            for(i=0; i<a; i++){
                if(array[i][j] != 2){
                   array[i][j] = 2;
                   cap++;
                }

            }
        }
        count = 0;
    }
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }

    cout << cap <<endl;

return 0;
}
