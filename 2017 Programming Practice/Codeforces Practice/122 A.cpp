#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vec[14];
    vec[0] = 4;     vec[3] = 7;
    vec[1] = 44;    vec[4] = 77;
    vec[2] = 444;   vec[5] = 777;
    vec[6] = 477;   vec[7] = 447;
    vec[8] = 744;   vec[9] = 774;
    vec[10]= 474;   vec[11] = 747;
    vec[12]= 74;    vec[13] = 47;


    string word;
    int i,j,t,a,b,count = 0,save = 0;
    cin >> word;
    int limit = word.size();
    for(i=0; i<limit; i++){
        if(word[i] == '4' || word[i] == '7'){
            count++;
        }
        save += (word[i]-48);
        save *= 10;
    }
    save =  save/10;

    if(count == limit){
        cout<<"YES"<<endl;
    }
    else if(save % 4 == 0 || save % 7 == 0){


        cout<<"YES"<<endl;
    }
    else{
        for(i=0; i<14; i++){
            if(save%vec[i] == 0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }
}
