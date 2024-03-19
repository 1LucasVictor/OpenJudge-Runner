#include<stdio.h>
int main(void)
{
    long num,i,j=0,count=0;
    long a[1000000];
    while(scanf("%ld",&num) != EOF){
        for(i = 0 ; i < 1000000 ; ++i){
            a[i]=1;
        }
        for(i = 2 ; i <= num ; i++){
            if(a[i] != 0){
                    count++;
                    a[i]=count;
                    for(j = i + i ; j <= num ; j += i){
                        a[j]=0;
                    }
                
            }
        }
        if(num == 1){
            printf("0\n");
        } else {
            for(i = num ; a[i] == 0 ; i--){}
            printf("%ld\n",a[i]);
        }
        count=0;
    }
    return 0;
}