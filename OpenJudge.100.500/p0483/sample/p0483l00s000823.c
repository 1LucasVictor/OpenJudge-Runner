#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    int str[3];
    str[2]=a%10;
    a =a/10;
    str[1]=a%10;
    a =a/10;
    str[0]=a%10; 
    for(int i=0;i<3;i++){
        if(str[i]==7){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}