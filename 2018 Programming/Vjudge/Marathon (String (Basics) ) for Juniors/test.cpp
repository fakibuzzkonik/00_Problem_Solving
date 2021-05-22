#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    int i,vow=0,con=0;
    int len = x.size();
    for(i=0;i<len-1;i++){
        if(x[i]== 'n'){

        }else if(x[i]=='b' || x[i]=='c' || x[i]=='d' || x[i]=='f' || x[i]=='g' || x[i]=='h' || x[i]=='j' || x[i]=='k' || x[i]=='l' || x[i]=='m' || x[i]=='n' || x[i]=='p' || x[i]=='q' || x[i]=='r' || x[i]=='s' || x[i]=='t' || x[i]=='v' || x[i]=='x' || x[i]=='y' || x[i]=='z'){

                if(x[i+1]=='a' || x[i+1] == 'e' || x[i+1]=='i' || x[i+1]=='o' || x[i+1]=='u'){

                }else{
                    cout<<"NO"<<endl;
                    return 0;
                }
        }
    }
    char ch = x[len-1];
    if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'n'  ){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
