#include<stdio.h>
int main(){
    int num;
    int check, a;
    int flag = 0;

    scanf("%d",&num);
    a = num&10;
    num/=10;

    for (int i=0; i<3; i++){
        check = num%10;
        num/=10;
        if(check == a){
            flag = 1;
        }
        a = check;
    }

    if(flag == 0){
        printf("Good\n");
    }else{
        printf("Bad\n");
    }

    return 0;
}
