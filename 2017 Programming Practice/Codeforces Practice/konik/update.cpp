#include<bits/stdc++.h>
using namespace std;
int main()
{
    char word[100],ch;
    int i,j,t,a,b,x,y;

    printf("input a word\n");
    scanf("%s", word);
    int limit = strlen(word);

    printf("delete 2 character from 5th no\n");
    for(i=0; i<limit; i++){
            if(4<i){
                word[i-2] = word[i];
            }
    }
    word[limit-2] = '\0';

    printf("WORD = %s\n", word);
    printf("LENGTH = %d",strlen(word));

    return 0;

}
