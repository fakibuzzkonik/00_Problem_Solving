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

        int a,b,c,num,test = 0,c1 = 0, c2 = 0,result = 0,n,t,i,j,len;
        bool increasing = true; //increasing
        int aa[101];
        int bb[101];

        sf("%d%d",&a,&b);
        for(i=0; i<a; i++){
            sf("%d",&num);
            aa[i] = num;
            //if(num!=0){

//                if(test <= num){
//                    increasing = true;
//                }else{
//                    increasing = false;
//                }
//                test = num;
            //}
            //cout << test << " test "<< num << " b "<<increasing<<endl;
        }


        for(i=0 ;i<b; i++){
            sf("%d",&num);
            bb[i] = num;
        }


        if(increasing == true){
            sort(bb,bb+b);
            for(i=0,j=b-1; i<a,j>=0; i++){
                if(aa[i] == 0){
                    //    cout<<aa[i] << 'z' << bb[j]<<" b="<<increasing<<endl;

                    if(aa[i]<=bb[j])
                        increasing = true;
                    else{
                        increasing = false;
                        break;
                    }

                    aa[i] = bb[j];

                    j--;
                }
              }

        }
        test = 0;
        for(i=0; i<a; i++){
            if(test<=aa[i] && increasing == true)
                increasing = true;
            else
                increasing = false;

            test = aa[i];
        }


//        for(i=0; i<a; i++){
//            cout<<aa[i]<<' ';
//        }


//        test = 0;
//        for(i=0; i<a; i++){
//
//            if(i == 0 && aa[i] == 0){
//                j = 0;
//                while(1){
//                    //cout << bb[j] << " b-a "<<aa[0]<<endl;
//                    if(j>=b){
//                        break;
//                    }
//                    else if(0 >  bb[j] &&  bb[j] != 0){
//                        aa[i] = bb[j];
//                        bb[j]= 0;
//                        increasing = false;
//                        break;
//                    }else if(0 <= bb[j] && bb[j] != 0){
//                        aa[i] = bb[j];
//                        bb[j]= 0;
//                        increasing = true;
//                        break;
//                    }
//                    j++;
//
//                }
//            }else if(aa[i] == 0 && increasing == true && i!=0){
//                j = 0;
//                while(1){
//                    //cout << bb[j] << " b-a "<<aa[i-1]<<endl;
//                    if(j>=b){
//                        break;
//                    }else if(aa[i-1] >  bb[j] && i != 0 && bb[j] != 0){
//                        aa[i] = bb[j];
//                        bb[j]= 0;
//                        increasing = false;
//                        break;
//                    }
//                     else if(aa[i-1] <= bb[j] && i != 0 && bb[j] != 0){
//                         aa[i] = bb[j];
//                         bb[j]= 0;
//                         increasing = true;
//                         break;
//                     }
//                    j++;
//
//                }
//                if(aa[i] == 0 && increasing == true && i!=0){
//                    j = 0;
//                while(1){
//                    //cout << bb[j] << " b-a "<<aa[i-1]<<endl;
//                    if(j>=b){
//                        break;
//                    }
//                    else if(aa[i-1] <= bb[j] && i != 0 && bb[j] != 0){
//                         aa[i] = bb[j];
//                         bb[j]= 0;
//                         increasing = true;
//                         break;
//                     }
//                    j++;
//
//                }
//                }
//
//
//            }else if(aa[i] == 0 && increasing == false ){
//                j = 0;
//                //cout << bb[j] << " bb-a "<<aa[i-1]<<" j="<<j<<endl;
//
//                while(1){
//                    //cout<<"zero "<< bb[j]<<endl;
//                    if(j>=b){
//                        break;
//                    }else if(bb[j] != 0) {
//                        aa[i] = bb[j];
//                        bb[j] = 0;
//                        break;
//                    }
//                    j++;
//
//                }
//            }
//            //cout<<test <<" A "<<aa[i] <<" bool "<<increasing<<endl;
//            if(test<aa[i] && increasing != false)
//                increasing = true;
//            else
//                increasing = false;
//
//            test = aa[i];
//        }

        if(increasing != true)
            pf("Yes\n");
        else
            pf("No\n");

        return 0;
    }













