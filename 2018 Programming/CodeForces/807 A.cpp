#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n-1][2];
    cin >> n;

    int i,j,t,a,b,c,temp, nonincreasing = 1;
    for(i = 0; i<n; i++){
        cin >> a >> b;
        if(i == 0)
            temp = a;
        if(a != b){

            nonincreasing = 2;
            break;
        }
        if(temp >= a && i !=0 ){


        }else if(i != 0){
            nonincreasing = 0;
        }
        temp = a;
    }

    if(nonincreasing == 0 && nonincreasing != 2){
        printf("unrated\n");
    }else if(nonincreasing != 2){
        printf("maybe\n");
    }else if(nonincreasing == 2){
        printf("rated\n");
    }

    return 0;
}
