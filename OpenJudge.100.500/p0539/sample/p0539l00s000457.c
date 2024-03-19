#include<stdio.h>

int main(void){
    int num;
    int count=0;
    int check=0;
    scanf("%d",&num);
    for(int i = 1; i <= 9; i++){
        if(check==1)break;
        for(int j = 1; j <= 9; j++){
            if(i*j==num) {
                printf("Yes\n");
                check = 1;
                break;
            }else{
            count++;
            }
        }
    }
    if(count==81) printf("No\n");
    return 0;
}