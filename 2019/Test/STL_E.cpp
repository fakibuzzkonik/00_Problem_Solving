#include<bits/stdc++.h>
using namespace std;
int main(){

    string word1, word2;
    vector< pair<string, string> >vec;
    int i,j,k,a,b,c,n,m,t;

    cin >> n >> m;
    cin.ignore();
    for(i=0; i<n; i++){
        cin >> word1 >> word2;
        vec.push_back(make_pair(word1,word2));
    }
    int len = vec.size();
    for(i=0; i<m; i++){
        cin >> word1;
        bool gate = false;
        for(j=0; j<len; j++){
            if(word1 == vec[j].first){
                cout<<vec[j].second<<endl;;
                gate = true;
                break;
            }
        }
        if(gate == true) continue;
        int s = word1.size();
        if(word1[s-1] == 'y'){
            if(word1[s-2] != 'a' && word1[s-2] != 'e' && word1[s-2] != 'i' && word1[s-2] != 'o' && word1[s-2] != 'u'){
                word1[s-1] = 'i';
                word1 = word1 + 'e' + 's';
            }else{
                word1 = word1+'s';
            }

        }else if(word1[s-1] == 'o' || word1[s-1] == 's' ||word1[s-1] == 'x'){
            word1[s-1] = 'e';
            word1 = word1 + 's';
        }else if(word1[s-2] == 'c' && word1[s-1] == 'h'){
            word1 += "es";
        }else if(word1[s-2] == 's' && word1[s-1] == 'h'){
            word1 += "es";
        }else{
            word1 = word1+'s';
        }
        cout<<word1<<endl;

    }
}
