#include <stdio.h>


int main(void){

        int k;
        scanf("%d",&k);
        int a,b;
        scanf("%d%d",&a,&b);
        int judge = 0;

        for(int i=a;i<=b;i++){
                if(i%k == 0){ 
                        printf("OK\n");
                        judge = 1;
                        break;
                }   
        }   

        if(judge==0){
                printf("NG\n");
        }   

return 0;
}
