#include<bits/stdc++.h>
using namespace std;
int main(){

    double input = 0, sum = 0, result;
    while(1){

        scanf("%lf",&input);
        sum = (input*100)/190;
        printf("%lf   %.2lf\n", sum, round(sum));
        sum = 0;
        input = 0;
    }

}
