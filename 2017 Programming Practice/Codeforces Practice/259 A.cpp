#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word,WB = "WBWBWBWB" ,BW = "BWBWBWBW";
    //vectro<string>vec;
    int i,j,t,gate = 1,a1 = 0, a2 = 0,b1 = 0, b2 = 0,c,k,n,count1 = 0,count2 = 0;
    for(i=0; i<8; i++){
        cin >> word;
        if(word == WB){
            count1++;
        }
        else if(word == BW){
            count2++;
        }
        else{

            if(word[i] == 'B'){
                for(j=0; j<8; j++){
                    if(j%2 == 0 && word[j] =='B'){
                        a1++;
                    }
                    else if (j%2 != 0 && word[j] =='W'){
                        a2++;
                    }
                    else{
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                if(a1 == 4 && a2 == 4){
                    count1++;
                }
            }
            else if(word[i] == 'W'){
                for(j=0; j<8; j++){
                    if(j%2 == 0 && word[j] =='W'){
                        b1++;
                    }
                    else if (j%2 != 0 && word[j] =='B'){
                        b2++;
                    }
                    else{
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                if(b1 == 4 && b2 == 4){
                    count2++;
                }
            }
        }
    }
    //cout<< count1 << " "<<count2<<endl;

    if((count1>4 && count2 <4)||(count1<4 && count2 >4)){
        count1 = 4;
        count2 = 4;
    }

    if(count1 == 4 &&  count2 ==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
