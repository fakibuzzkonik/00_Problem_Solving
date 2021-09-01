#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    arr[0]=0;
    int number, sum = 0;
    for(int i = 1; i<=4; i++){
        cin >> number;
        arr[i] = number;
    }
    string word;
    cin >> word;
    int len = word.size();
    for(int i = 0; i<len; i++){
        char ch = word[i];
        sum = sum + arr[ch-'0'];
    }
    cout << sum <<endl;

}
