#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,g,h,m,l,k;

    int point,length;
    cin >> point >> length;
    int arr[point+1] ;
    for(i=0; i<point; i++){
        scanf("%d",&arr[i]);
    }

    sort(arr, arr+point);

    double maximum = 0;
    for(i=1; i<point; i++){
        maximum = max(maximum, (((arr[i]*1.00)-(arr[i-1]*1.00))/2.00));
    }
    maximum = max(maximum, arr[0]*1.00);
    maximum = max(maximum, length*1.00 - arr[point-1]*1.00);

    printf("%.10f\n",maximum);
}
