#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c = 0,n,m;
    bool left = false, right = false, up = false, down = false;
    cin >> n;
    int arr[n][2];
    for(i=0; i<n; i++){
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }

    for(i=0; i<n; i++){
        left = false, right = false, up = false, down = false;
        for(j=0; j<n; j++){
            if(arr[i][0] == arr[j][0] && i!=j){
                if(arr[i][1] < arr[j][1]){
                    up = true;
                }if(arr[i][1] > arr[j][1]){
                    down = true;
                }
            }
            if(arr[i][1] == arr[j][1] && i!=j){
                if(arr[i][0] < arr[j][0]){
                    right = true;
                }if(arr[i][0] > arr[j][0]){
                    left = true;
                }
            }

            if(up == true && down == true && left == true && right == true){
                c++;
                break;
            }
        }
    }
    cout<<c<<endl;
}
