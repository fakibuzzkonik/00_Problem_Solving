#include<bits/stdc++.h>
using namespace std;
int perfect_square(long long input){
    double a = sqrt(input);
    int b = sqrt(input);

    if(a == b)
        return 1;
    else
        return 0;
}
long long prime[1000001] ;
int main(){
    long long int i,j,t,n,a,b = 0,maxx; int c = 0;

    ///Prime
    maxx =  1000000;

    //memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = 1;
    for(j=2; j*j<=maxx; j++){
        if(prime[j] == false){
            for(i=j*2; i<=maxx; i+=j){
                prime[i] = true;
            }
        }
    }
    //cout<<"3 "<<(int)sqrt(9)<<"  "<<prime[3]<<endl;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
            c = 0;
            if(a == 4){
                cout<<"YES"<<endl;
            }else if(a%2 == 0){
                cout<<"NO"<<endl;
            }else if(prime[(int)sqrt(a)] == false && perfect_square(a) == true){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

    }


    return 0;
}
