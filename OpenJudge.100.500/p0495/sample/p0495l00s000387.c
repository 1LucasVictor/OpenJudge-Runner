#include <stdio.h>

int main(void){
    int i,flag,temp;
    char mo[3];
    for(i=0;i<3;i++){
        scanf("%c",&mo[i]);
    }
    for(i=0;i<3;i++){
        if(mo[i]=='A'){
            temp=0;
        }
        else{
            temp=1;
        }
    if(i!=0 && temp !=flag){
        printf("Yes");
        return 0;
    }
    flag =temp;
    }
    printf("No");
    return 0;
}