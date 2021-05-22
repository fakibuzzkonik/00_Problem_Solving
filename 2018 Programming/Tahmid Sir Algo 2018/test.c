#include<stdio.h>
int main()
{

    int i,v=0,c=0;
    char a;
    printf("Input 5 Character :");
    for(i=1;i<=5;i++){
        scanf("%c",&a);

        if( a=='A' || a=='E'  ||  a=='I'  ||  a=='O'  ||  a=='U'  ||  a=='a'  ||  a=='e'  ||  a=='i'  ||  a=='o'  ||  a=='u'){
             v++;
        }else{
            c++;
        }

    }

        printf("Totoal Vowel %d\n",v);
        printf("Total Consonant %d\n",c);
return 0;
}
