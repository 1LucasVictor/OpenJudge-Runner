#include<stdio.h>
int main(void){
    int i;
    int j;
    int a,b;
    while(1){
        name:scanf("%d%d",&a,&b);
        if(a==0&&b==0){
            break;
        }
        else if(a==0||b==0){
            printf("\n");
            goto name;
        }
        for(i = 1;i <= a;i++){
            if(i==1||i==a){
                for(j = 1;j <= b;j++){
                    printf("#");
                }
            }
            else{
                for(j = 1;j <= b;j++){
                    if(j==1||j==b){
                        printf("#");
                    }
                    else{
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}