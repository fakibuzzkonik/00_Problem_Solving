    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define     sf           scanf
    #define     pf           printf
    #define     ln           printf("\n")
    #define     mkp(a,b)     make_pair(a,b)
    #define     pii          pair<ll,ll>
    #define     mem(a,b)     memset(a,b,sizeof a)
    #define     pb           push_back
    #define     fast         ios_base::sync_with_stdio(false),cin.tie(NULL);
    #define     debug(x)     cout<< #x <<" is = "<< (x) << endl;
    #define     SZ           100005
    //cout.tie(NULL);

    //int dx[]= {0,0,1,-1};/*4 side move*/
    //int dy[]= {-1,1,0,0};/*4 side move*/
    //int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
    //int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
    //int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
    //int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

    typedef unsigned long long ul;

    ///priority_queue <int>PQMX;
    ///front
    ///priority_queue <int, vector<int>, greater<int> >PQMN;
    ///top
    ///map<int,int>mp;
    ///map<int,int>::iterator it;
    ///queue<int>Q;
    ///front
    ///stack<int>S;
    ///top
    ///set<int>st;
    ///insert

    int main(){

        int a,b,c,d,hour,minute,num,test = 0,c1 = 0, c2 = 0,result = 0,n,t,i,j,len;
        bool increasing = true; //increasing

        char time[5];

        sf("%s",&time);

        a = time[0]- 48;
        b = time[1]-48;
        c = time[3]-48;
        d = time[4]-48;
        hour = a*10+b;
        minute = c*10+d;
        //cout<<hour << " : " << minute<<endl;
        //if(time[0]  == time[3]&& time[1] == [2])
        int count1 = -1;
        hour = hour -1;
        minute = minute -1;
        for(i=0; i<25; i++){
            hour = hour + 1;
            a = hour/10;
            b = hour%10;
            if(hour>=24){
                hour = 00;
                a = 0;
                b = 0;
                //break;
            }
            for(j=0; j<=60; j++){
                count1++;
                minute = minute + 1;
                c = minute/10;
                d = minute %10;
                if(minute>=60){

                    minute = 00;
                    c = 0;
                    d = 0;
                    //break;
                }
                //cout<<">> "<<a<<b<<":"<<c<<d <<" min "<<minute<<" j "<< j<<endl;
                if(a == d && b == c){
                    cout<<count1<<endl;
                    return 0;
                    //cout<<a<<b<<":"<<c<<d<<endl;
                    break;

                }
                if(minute>=59)
                    break;
                }
            }
        return 0;
    }













