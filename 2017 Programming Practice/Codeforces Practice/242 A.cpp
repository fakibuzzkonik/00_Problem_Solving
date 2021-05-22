#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,n,x,y,a,b,count = 0;
    vector<int>vec1,vec2;

    cin >> x >> y >> a >> b;
//    if(a > b )
//    {
//        vec1.push_back(a);
//        vec2.push_back(b);
//        count++;
//    }

    if(x == a && b == a)
    {

    }
    else
        for(i=a; i<=x; i++)
        {
            for(j=b; j<=y; j++)
            {

                if(i<=x && j<=y && i != j && i > j)
                {
                    vec1.push_back(i);
                    vec2.push_back(j);
                    count++;
                }
            }
        }
    t = vec1.size();
    cout<<count<<endl;
    for(i=0; i<t; i++)
    {
        cout<< vec1[i] <<" "<<vec2[i]<<endl;
    }
    return 0;
}
