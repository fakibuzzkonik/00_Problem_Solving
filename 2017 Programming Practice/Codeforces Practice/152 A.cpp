#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b;
    vector<int>vec;
    cin >> a >> b;
    cin.ignore();
    int word[a][b];
    char ch;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin>>ch;
            word[i][j] = ch - 48;
        }
    }
    int max = 0, count = 0,save,c=0;
    for(j=0; j<b; j++){
        for(i=0; i<a; i++){
            if(i == 0){
                max = word[i][j];
            }
            else if(word[i][j] > max){
                max = word[i][j];
            }
            else if(word[i][j] == max){
                save = max;
                count++;
            }
        }
        for(i=0; i<a; i++){
            if(word[i][j] == max){
                c++;
            }
        }
        if(count == a){
            vec.push_back(save);
        }
        else if(c == 1){
            vec.push_back(max);
        }
        max = 0; c = 0; save = 0;
    }
    cout << vec.size()<<endl;

}
