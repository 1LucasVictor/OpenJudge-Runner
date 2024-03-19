#include<stdio.h>
int main(void){
    int n;
    int flag = 0;
    scanf("%d",&n);
    if(n > 81){
        flag=0;
    }
    else{
        for(int i=1;i<=9;i++){
            if(n%i == 0 && n/i <= 9){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("Yes");
    }
    else{
        printf("No");
    }

}