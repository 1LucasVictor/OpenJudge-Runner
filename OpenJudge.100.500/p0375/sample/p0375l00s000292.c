#include<stdio.h>
int main(){
    int i,x,s;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if( i % 3 == 0|| i % 10==3){
            printf(" %d",i);
        }else {
            s=i;
            while(1){
            s=s/10;
                if(s%10==3){
                    printf(" %d",i);
                    break;
                }else if(s/10 ==0){                
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}