#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin >> number;
    string odd = "I hate", even = "I love";
    int i = 1;
    while(i<=number){
        if(i%2 != 0){
            cout<<odd;
        }else{
            cout<<even;
        }
        if( i != number){
            cout<<" that ";
        }else{
            cout<<" it"<<endl;
        }
        i++;
    }
}
