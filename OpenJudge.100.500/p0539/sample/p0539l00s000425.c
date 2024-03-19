#include<stdio.h>
int main(void){
    int n,i;
    int res_flag=0;
    scanf("%d",&n);

    for (i=9;i>1;i--){
        if(n%i==0 && n/i <10){
            res_flag =0;
            break;
        }else{
            res_flag =1;

        }
    }
    if(res_flag==1){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
}
