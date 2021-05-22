
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j,t,sum =0,limit = 0, numb,count = 0;
    vector<int>vec;

    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &numb);
        if(numb != 4)
            vec.push_back(numb);
        else{
            count++;
        }
    }
    sort(vec.begin(), vec.end());
    limit = vec.size();
    for(i=0; i<limit; i++){
        sum = sum + vec[i];
        if(vec[i] < 4 && vec[i] != 0){
            for(j=limit-1; j>i; j--){
                if(sum + vec[j] <=4){
                    sum = sum +vec[j];
                    vec.erase(vec.begin()+j);
                    if(sum<4)
                        continue;
                }
            }
            count++;
            sum = 0;
        }
        limit = vec.size();
    }
    printf("%d\n", count);
    return 0;
}
