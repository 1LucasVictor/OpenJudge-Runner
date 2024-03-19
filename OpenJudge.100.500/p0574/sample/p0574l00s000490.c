#include<stdio.h>
int main(){
    int a=0,i;
    char st[5];
    scanf("%s", st);
    for(i=0;i<4;i++){
        if(i<3){
            if(st[i] == st[i+1]){
                a=1;
                break;
            }
        }
    }

    if(a==1){
        printf("Bad\n");
    }
    else{
        printf("Good\n");
    }
    return 0;
}
