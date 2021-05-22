#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,g,h,n,m; char ch;
    vector<int>maximal;
    int person,subject;
    cin >> person >> subject;
    char result[person][subject] ;

    for(i = 0; i<person; i++){
        for(j = 0 ; j<subject; j++){
            cin >> ch;
            result[person][subject] = ch;
        }
    }
    for(i = 0; i<person; i++){
        for(j = 0 ; j<subject; j++){
            cout << result[person][subject];
        }cout<<endl;
    }

    int max = 0, maximum = 0;
    for(i = 0; i<person; i++){
        max = 0;
        for(j = i+1 ; j<person; j++){
            if(result[i][0] == '1' || result[j][0] == '1')
                max++;
            if(result[i][1] == '1' || result[j][1] == '1')
                max++;
            if(result[i][2] == '1' || result[j][2] == '1')
                max++;
            if(result[i][3] == '1' || result[j][3] == '1')
                max++;

        }
        if(max>maximum)
            maximum = max;

        maximal.push_back(max);
        cout<<max<<endl;

    }
    sort(maximal.begin() ,maximal.begin() + 5);
    c = 0;
    for(i = 5; i>=0; i--){
        if(maximal[4] == maximal[i])
            c++;
    }
    cout<<maximum<<endl;
    cout<<c<<endl;
}
