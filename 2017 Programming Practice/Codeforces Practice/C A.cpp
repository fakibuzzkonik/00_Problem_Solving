#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,t,a,b,c,y1,y2,x1,x2;
     vector<int>vec;
     vector<vector<int> >vex;

     //scanf("%c%d", &x1, &y1);
     //scanf("%c%d", &x2, &y2);
     ///seat =[1][8];
     ///target = [3][6];

     for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            vec.push_back(1);
        }
        vex.push_back(vec);
        vec.clear();
     }

//     for(i=0; i<8; i++){
//        for(j=0; j<8; j++){
//            cout<<vex[i][j];
//        }
//        cout<<endl;
//     }
    //vex[1][8] = vex[x1][y1] = 0;
    //vex[3][6] = vex[x2][y2] = 0;

    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);

    i = x1; int gate = 1;
    while(gate){
        if(i == x2){
            gate = 0;
            if(y1 == y2){
                break;
            }
            else if(y1>y2){
                for(j=y1; j>y2; j--){
                    cout<<"D"<<endl;
                }
            }
            else if(y1<y2){
                    for(j=y1; j<y2; j++){
                    cout<<"U"<<endl;
                }
            }
        }
        else if(i < x2){
                cout << "RD" <<endl;
                i++;
        }
        else if(i > x2){
            cout << "LU" <<endl;
            i--;
        }
    }






//     if(x1 < x2){
//        for(i=1; i<=8; i++){
//            for(j=y1; j>=y2; y2--){
//                if(y1 == j){
//                    cout<<"L"<<endl;
//                }
//                else if(y1 == j){
//                    cout<<"L"<<endl;
//                }
//                else
//            }
//        }
//     }


}
