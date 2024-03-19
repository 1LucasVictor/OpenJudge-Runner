#include<stdio.h>

int main(){
    int a,i,n[101];
    
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=a-1;i>=0;i--){
        if(i==a-1)printf("%d",n[i]);
        else printf(" %d",n[i]);
    }
    printf("\n");
    return 0;
}
