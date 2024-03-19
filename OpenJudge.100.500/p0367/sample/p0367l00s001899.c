#include<stdio.h>
    int main(void){
    
    int a,b,c;
    int i=0,j=0;
    
    scanf("%d %d %d",&a,&b,&c);
    
    while((a+j)<=b){
        if(c%(a+j)==0){
            i++;
        }
    j++;
    }
    printf("%d\n",i);
    
    return 0;
    }
