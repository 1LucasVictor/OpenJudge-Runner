#include <stdio.h>

int main(void){
    int flag=1;
    while(flag){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0){
            flag=0;
            break;
        }
        
        int i,j;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(i>0 && i<a-1 && j>0 && j<b-1){
                    printf(".");
                }else{
                    printf("#");
                }
                
                if(j==b-1){
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
}
