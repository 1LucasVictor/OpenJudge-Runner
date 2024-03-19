#include<stdio.h>
int main(void){

    int a,b,sum;
    int x = 10;
    while(scanf("%d%d",&a,&b) != EOF){

        int count;
        count = 1;

        if(a+b < 10)printf("1\n");

        else{
            sum = a+b;
            for(;;){

               sum = sum / x;
               count++;

               if(sum < 10)break;

            }
            printf("%d\n",count);
        }

    }
    return 0;
}