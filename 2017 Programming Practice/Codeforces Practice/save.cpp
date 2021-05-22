#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    int i,j,t,a,b,count = 0,save = 0;
    vector<int>vec;

    for(i=0; save<=100; i++){
        save *= 10;
        save += 4;
        cout<<save << endl;
        vec.push_back(save);
    }

    for(i=0, save = 0; save<=100; i++){
        save *= 10;
        save += 7;
        cout<<save << endl;
        vec.push_back(save);
    }

}
