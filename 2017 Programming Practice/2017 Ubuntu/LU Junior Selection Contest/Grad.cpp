#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    //string word =  "abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int i,j,k,n,a,b,c = 1; char ch;
        cin >> n;
        string word;
        vector<char>vec;
        vector<string>vec2;

        for(j=0,k=0; j<n; j++){
            for(i=0; i<n; i++){
                cin >> ch;
                word += ch;
                //vec.push_back(ch);
            }
            sort(word.begin(),word.end());
            vec2.push_back(word);
            word.clear();
        }
        for(j=0; j<n; j++){
            for(i=0; i<n-1; i++){
                if(vec2[i][j] >vec2[i+1][j]){
                    cout<<"NO"<<endl;
                    c = 0;
                    goto last;
                }
            }
        }
        last:
        if(c)
        cout<<"YES"<<endl;

    }
    return 0;
}
