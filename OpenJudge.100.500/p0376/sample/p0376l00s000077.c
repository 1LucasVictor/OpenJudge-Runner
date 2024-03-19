#include <stdio.h>
int main(void){
    int array[1001];
    int i,j,a,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a);
        array[i]=a; 
        }
    
    for(j=n;j>0;j--){
        
        if(j==1) printf("%d",array[j-1]);
        else printf("%d ",array[j-1]);
    }
    
    printf("\n");
    return 0;
}
