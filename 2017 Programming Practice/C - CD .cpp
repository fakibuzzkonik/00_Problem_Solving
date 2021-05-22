//3 3
//1
//2
//3
//1
//2
//4
//0 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n1,n2,count = 0,num = 0, nam = 0;

    while(1){
        scanf("%d %d", &n1, &n2);
        if(n1 == 0 && n2 == 0)
            break;

        count = 0;
        set<int>konik;
        set<int>::iterator it;

        while(n1--){
            scanf("%d",&num);
            konik.insert(num);
        }
        while(n2--){
            scanf("%d", &nam);
            it = konik.find(nam);
            if(it!=konik.end()){
                count++;
            }
        }
        printf("%d\n", count);

    }

}
