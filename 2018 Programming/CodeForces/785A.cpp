#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total = 0;
    string word;
    cin >> n;
    while(n--){
        cin >> word;
        if(word == "Tetrahedron")
            total += 4;
        else if(word == "Cube")
            total += 6;
        else if(word == "Octahedron")
            total += 8;
        else if(word == "Dodecahedron")
            total +=12;
        else if(word == "Icosahedron")
            total +=20;
    }
    cout<<total<<endl;
    return 0;
}
