#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[30];
    float percentage;
};

int main(){
    int i,j,k,total_person = 0,person = 0;
    int nam[25];
    printf("Type total Student : ");
    scanf("%d",&total_person);

    struct student rashel[total_person];
    for(i = 0; i<total_person; i++){
        printf("\n");
        printf("Type %d No Student data\n", i+1);
        printf("    ID : ");
        scanf("%d",&rashel[i].id);

        printf("    Name : ");
        scanf("%s",nam);
        strncpy (rashel[i].name, nam, 25);

        printf("    Percentage : ");
        scanf("%f",&rashel[i].percentage);


    }
    printf("-------------------------------\n");
    while(1){
        printf("Check index no : ");
        scanf("%d",&person);

        printf("\n");
        printf("Data of %d No index\n",person);
        printf("    ID : %d\n",rashel[person].id);
        printf("    Name :%s\n",rashel[person].name);
        printf("    Percentage %f \n", rashel[person].percentage);
        printf("\n");
    }


}
