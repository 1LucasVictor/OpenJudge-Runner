#include <stdio.h>

int main(void){
    int input[3],dummy;
    int i,j;
    
    scanf("%d %d %d",&input[0],&input[1],&input[2]);
    for(i=0;i<3;i++){
        if(input[i]<1 || 10000<input[i]){
            printf("error\n");
            return 0;
        }
    }
    
    for(i=2;i>=0;i--){
        for(j=0;j<i;j++){
            if(input[j]>input[j+1]){
                dummy=input[j];
                input[j]=input[j+1];
                input[j+1]=dummy;
            }
        }
    }
    printf("%d %d %d\n",input[0],input[1],input[2]);
    
    return 0;
}
