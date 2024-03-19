#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
    int count=0,i,z=0;
    if(n>999999)goto end2;
    if(n==0 || n==1){
        printf("0\n");
        goto end2;
    }
    if(n==2){
        printf("1\n");
        goto end2;
    }
    if(n==3 || n==4){
        printf("2\n");
        goto end2;
    }
    if(n==5 || n==6){
        printf("3\n");
        goto end2;
    }
    if(n==7 || n==8 || n==9 || n==10){
        printf("4\n");
        goto end2;
    }
    if(n>10){
        count+=4;
        for(i=10;i<=n;i++){
            if(i%2==0){
                goto flg;
            }
            else if(i%3==0){
                goto flg;
            }
            else if(i%5==0){
                goto flg;
            }
            else if(i%7==0){
                goto flg;
            }
            count++;
            flg:
            z++;
        }
    }
    printf("%d\n",count);
    end2:
    z++;
    z=0;
    }
    return 0;
}