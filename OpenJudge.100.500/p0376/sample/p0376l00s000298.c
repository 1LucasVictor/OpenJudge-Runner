#include <stdio.h>
int main(void){
    int n,i,data[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    for(i=n-1;i>=0;i--){
        if(i!=n-1){
            printf(" ");
        }
        printf("%d",data[i]);
    }
    printf("\n");
    
    return 0;
}