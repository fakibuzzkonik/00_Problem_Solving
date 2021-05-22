#include<stdio.h>

int main(){
    int distance1 = 2129;
    int distance2 = 0;
    int distance3 = 52;
    int distance4 = 0;
    int distance5 = 435;
    int distance6 = 31;
    int value = distance1;

    int totalchar = 30;
    char ch[totalchar];
    int i = 0;
    for(i = 0 ; i<totalchar; i++){
        if(i == 5){
            value = distance2;
        }else if(i == 10){
            value = distance3;
        }else if(i == 15){
            value = distance4;
        }else if(i == 20){
            value = distance5;
        }else if(i == 25){
            value = distance6;
        }
        if(value != 0){
            ch[totalchar-1-i] = value%10+48;
            value = value / 10;
        }else{
            ch[totalchar-1-i] = ' ';
        }

    };

    for(i=0; i<totalchar; i++){
        printf("%c",ch[i]);
    }
}

//void convert(int value, int position){
//    for(int i = position ; i<totalchar; i++){
//        if(value != 0){
//            ch[totalchar-1-i] = value%10+48;
//            value = value / 10;
//        }else{
//            ch[totalchar-1-i] = 'X';
//        }
//    }
//}
