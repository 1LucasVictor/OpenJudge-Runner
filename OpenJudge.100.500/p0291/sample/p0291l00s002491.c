#include<stdio.h>
int main(void){
    int n,m[200050],test,maxn,small;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);
        }
        maxn=0;
    for(int i=0;i<n;i++){
        for(int o=i+1;o<n;o++){
            test=m[o]-m[i];
            if(test>0&&test>maxn){
               maxn=test;
               //printf("RE %d-%d",m[o],m[i]);
               //printf("RE %d",maxn);
               }
            else if(test<0&&test<maxn){
               small=test;
            }
        }

    }
    if(maxn>0){
        printf("%d",maxn);
    }
    else if(maxn==0&&small<0){
        printf("%d",small);
    }
    else if(maxn==small){
        printf("0");
    }
    return 0;
}