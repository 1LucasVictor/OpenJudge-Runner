#include<stdio.h>
int main(void){
    int a[1000],b[1000],j,k,l;
    int i=0;
    while(1){
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0 && b[i]==0){
            break;
            }
        i++;
        }
    for(j=0;j<i;j++){
        for(k=0;k<a[j];k++){
            for(l=0;l<b[j];l++){
                if(1<=k&&k<a[j]-1&&1<=l&&l<b[j]-1){
                printf(".");
            }else{
                printf("#");
            }
            }
        printf("\n");
            
    }
    printf("\n");
    
}    
    return 0;
}
     
