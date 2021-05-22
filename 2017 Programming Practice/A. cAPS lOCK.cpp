#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    string word;
    cin >> word;
    int length = word.size();

    for(i=0; i<length; i++){
        if(islower(word[0])){
            word[0] = toupper(word[0]);
        }
        else{
            word[i] = tolower(word[i]);
        }
    }
    cout << word <<endl;
    return 0;
}
