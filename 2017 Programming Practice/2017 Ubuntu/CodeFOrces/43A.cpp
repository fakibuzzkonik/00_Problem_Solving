#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,t,n,a,b,c, max = -1;
    map<string, int>maap; string word;
    map<string, int>::iterator it;
    cin >> n;
    while(n--){
        cin >> word;
        maap[word]++;
        word.clear();
    }

    for(it = maap.begin(); it != maap.end(); it++){
        if(max < it->second){
            word = it->first;
            max = it->second;
        }

    }
    cout<<word<<endl;
    return 0;
}
