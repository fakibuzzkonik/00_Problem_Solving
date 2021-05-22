
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int number = -1,i,j,t,a,b,c,len;

    while(cin >> number && number != -1){
        if(number == 0){
            cout<<0<<endl;
            continue;
        }
        vector<long long>vec;
        while(number != 0){
            a = number%3;
            vec.push_back(a);   //cout<<a<<endl;
            number = number / 3;    //cout<<number<<endl;

        }
        len = vec.size();
        reverse(vec.begin(),vec.end());
        for(i = 0; i<len; i++){
            cout<<vec[i];
        }cout<<endl;
    }
    return 0;
}

