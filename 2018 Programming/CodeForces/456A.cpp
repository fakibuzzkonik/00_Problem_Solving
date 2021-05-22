#include<bits/stdc++.h>
using namespace std;
bool sortcall(const vector<double>&v1, const vector<double>&v2){
    return v1[2] < v2[1];
}
int main()
{
    int i,j,t,a,b,c,n,m,p,q,temp,temp2;
    double p1,q1,p2,q2,vag,minn = 2147483647,maxx = -2147483647;
    cin >> n;
    //double arr[n][3];
    vector<double>vec;
    vector<vector<double>>vecbase;
    for(i=0; i<n; i++){
        cin >> p >> q;
        vag = q/p;
        if(minn>vag){
            minn = vag;
        }if(maxx<vag){
            maxx = vag;
        }
//        vec.push_back(p);
//        vec.push_back(q);
//        vec.push_back(vag);
//        vecbase.push_back(vec);
//        vec.clear();
//        arr[i][0] = p;
//        arr[i][1] = q;
//        arr[i][2] = q/p;
    }
    sort(vecbase.begin(),vecbase.end(),sortcall);
//    for(i=0; i<n; i++){
//        cout<<vecbase[i][0]<< " "<<vecbase[i][1]<<" "<<vecbase[i][2]<<endl;
//    }
//    for(i=0; i<n-1; i++){
//            if(arr[i][1]<=arr[i+1][1]){
//                if(arr[i][0]>=arr[i+1][0]){
//                    swap(arr[i][1],arr[i+1][1]);
//                    swap(arr[i][0],arr[i+1][0]);
////                    if(i>=2)
////                        i=i-3;
////                    else if(i==1)
////                        i = i -2;
////                    else
////                        i = i -1;
//                    i = -1;
//                    continue;
//                }
//
//            }
//
//    }
    //cout<<'\n'<<endl;
//    for(i=0; i<n; i++){
//            cout<<arr[i][0]<< " "<<arr[i][1];
//        cout<<endl;
//    }

    p1 = minn;
    p2 = maxx;

    if(p1 < p2){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }

}
