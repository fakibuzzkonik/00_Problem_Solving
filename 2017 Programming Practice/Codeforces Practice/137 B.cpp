    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int i,j,t,n,a,b,count = 0,max = -1;
        map<int,int>maap;
        cin >> n;
        for(i=1; i<=n; i++){
            cin >> a;
            if(a<=n)
                maap[a]++;
            if(max < a){
                max = a;
            }
        }
        //cout << max << endl;
        cout << n - maap.size() <<endl;
    }
