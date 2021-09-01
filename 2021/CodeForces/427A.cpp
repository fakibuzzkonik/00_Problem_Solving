
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m ;
    cin >> n;
    int police = 0;
    int c = 0;
    int i = 0;
    for(i = 0; i< n; i++){
        cin >> m;
        if(m == -1  && police <=0){
            c++;

        }else if(m == -1  && police > 0){
            police--;

        }
        if(m != -1){
            police = police + m;
        }
    }
    cout << c << endl;
}
