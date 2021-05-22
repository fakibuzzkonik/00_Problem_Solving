#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b;
    string word,save;
    cin >> a >> b;
    cin >> word;
    save = word;
    for(i=0; i<b; i++){
        for(j=0; j<a-1; j++){
            if(word[j] == 'B' && word[j+1] == 'G'){
                swap(save[j],save[j+1]);
            }
        }
        word = save;
    }

    cout << save << endl;
    return 0;
}
