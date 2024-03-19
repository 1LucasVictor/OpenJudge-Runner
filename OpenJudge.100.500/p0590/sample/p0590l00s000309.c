#include <stdio.h>

int main(void){
    int a[5];
    int k,i,m,n,maxl,length;
    maxl = 0;
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(n=0;n<4;n++){
        for(m=1;m<5;m++){
            length = a[m]-a[n];
            if(maxl<length){
                maxl = length;
            }
        }
    }
        if(maxl>k){
            printf(":(");
        }else{
            printf("Yay!");
        }
    return 0;
    
}