#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
/*
Madam, Im adam!
Roma tibi subito motibus ibit amor.
Me so hungry!
Si nummi immunis
DONE

*/
int main(){

    int m = 10;
    while(m){ m--;
            char word[500];
            gets(word);
            //printf("%s\n",word);
            int i,j,k,t,a,b,c,d,e;
            int len = strlen(word);

            if(len == 4 && word[0] == 'D' && word[1] == 'O' && word[2] == 'N' && word[3] == 'E'){
                return 0;
            }

            for(i = 0; i<len; i++){
                if(word[i] >= 65 && word[i] <= 90){
                    word[i] = tolower(word[i]);
                }if(word[i] >= 97 && word[i] <= 122){

                }else {
                    for(j=i,k=i; j<len; ){
                        if(!isalpha(word[j])){

                            j++;
                        }else{ //cout<<word[j]<<"  "<<k<<endl;


                            word[k] = word[j];
                            word[j] = ' ';
                            if(word[k] >= 65 && word[k] <= 90)
                                word[k] = tolower(word[k]);
                            k++;j++;
                        }
                    }word[k] = '\0';
                }

            }   //Madam, Im adam!


            len = strlen(word);
            //printf("%s\n",word);
            if(len%2 == 0){
                for(i=0,j = len-1; i<=len/2; i++){
                    //cout<<word[i]<<"  "<<word[j]<<endl;
                    if(word[i] == word[j]){

                    }else{
                        cout<<"Uh oh.."<<endl;
                        break;
                    } j--;
                }
            }else{
                for(i=0,j = len-1; i<=(len/2)-1; i++){
                    //cout<<word[i]<<"  "<<word[j]<<endl;
                    if(word[i] == word[j]){

                    }else{
                        cout<<"Uh oh.."<<endl;
                        break;
                    } j--;
                }
            }
            cout<<"You won't be eaten!"<<endl;

    }


	return 0;
}

