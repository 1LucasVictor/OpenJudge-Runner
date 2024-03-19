#include<stdio.h>
int main(){
    char num[4];
    int check, a;
    int flag = 0;

    scanf("%c%c%c%c",&num[0],&num[1],&num[2],&num[3]);

    if(num[0] == num[1])flag=1;
    if(num[1] == num[2])flag=1;
    if(num[2] == num[3])flag=1;

    if(flag == 0){
        printf("Good\n");
    }else{
        printf("Bad\n");
    }

    return 0;
}
