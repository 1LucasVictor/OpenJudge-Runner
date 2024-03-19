#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(void){
    long sup,inf;
    scanf("%ld %ld",&sup,&inf);
    int min=2019;
    long i,j;
    int mod;
    for(i=sup;i<=inf;i++){
        for(j=sup;j<i;j++){
            mod=(i*j)%2019;
            /*if(mod==1){
                //printf("(%ld,%ld)\n",i,j);
                printf("1");
                return 0;
            }
            else if(mod<min){
                min=mod;
            }*/
            if(mod<min){
                min=mod;
            }
        }
    }
    printf("%d",min);
    return 0;
}