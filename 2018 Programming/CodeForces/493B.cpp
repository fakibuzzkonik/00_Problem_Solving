#include<bits/stdc++.h>
using namespace std;
long long int posarray[200001], negarray[200001];
int main(){
    long long int i,j,t,a,b,b1 = 1, b2 = 1,c1 = 0, c2 = INT_MIN,d1 = 0, d2 = 0,e,f,g,h,n,m, k = 0,l = 0;

    long long int sum1 = 0,sum2 = 0, p = 0, last,result = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        if(n-1 == i){
            last = a;
        }
        if(a>0){
            p = 1;
            sum1 = sum1+a;
            posarray[k] = a;
            k++;
        }else{
            p = 2;
            a = a*(-1);
            sum2 = sum2+a;
            negarray[l] = a;
            l++;
        }

    }

    if(sum1>sum2){
        result = 1;
    }else if(sum1<sum2){
        result = 2;
    }else{
        for(i=0; i<n && !result; i++){
            if(posarray[i]>negarray[i]){
                result = 1;
            }else if(negarray[i]>posarray[i]){
                result = 2;
            }else if(negarray[i] == 0 && posarray[i] == 0){
                break;
            }
        }

        if(!result){
            if(last > 0){
                result = 1;
            }else{
                result = 2;
            }
        }
    }

    if(result == 1)
        cout<<"first"<<endl;
    else
        cout<<"second"<<endl;
    //return 0;
    //cout<<sum1<<" "<<sum2<<" "<<d1<<" "<<d2<<" "<<p<<endl;
}
