#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,c=0,a,b;
    char ch[102][102];
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++){
        scanf("%s",ch[i]);
        getchar();
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            c=0;
            if(i==0 || i==n-1){
                a=1;
                b=1;
                if(i!=0)
                    b=-1;
                if(j==0 || j==n-1){
                    if(j!=0)
                        a=-1;
                    if(ch[i+b][j]=='o')
                        c++;
                    if(ch[i][j+a]=='o')
                        c++;
                }
                else{
                    if(ch[i][j+1]=='o')
                        c++;
                    if(ch[i][j-1]=='o')
                        c++;
                    if(ch[i+b][j]=='o')
                        c++;
                    cout<<"YYY i"<<i<< " j"<<j<< " c"<<c<<endl;

                }
                cout<<"ZZZ i"<<i<< " j"<<j<< " c"<<c<<endl;

            }
            else if(j==0 || j==n-1){
                a=1;
                if(j!=0)
                    a=-1;
                if(ch[i+1][j]=='o')
                    c++;
                if(ch[i-1][j]=='o')
                    c++;
                if(ch[i][j+a]=='o')
                    c++;
            }
            else{
                if(ch[i+1][j]=='o')
                    c++;
                if(ch[i-1][j]=='o')
                    c++;
                if(ch[i][j+1]=='o')
                    c++;
                if(ch[i][j-1]=='o')
                    c++;
            }
            if(c%2!=0){ ///vagsesh jodi thake
            r=-1;
            break;
            }

        } ///loop j finish
        if(r!=0)
            break;
    }
    if(r==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
