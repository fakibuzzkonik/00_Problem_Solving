#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;

    cin >> word;
    int i,j,t,len,count = 0;
    len = word.size();

    for(i=0; i<len; i++){
        if(word[i] == '4' || word[i] == '7')
            count++;
    }

    if(count == 4 || count == 7)
        cout << "YES" <<endl;
    else
        cout<< "NO" <<endl;

    return 0;
}
