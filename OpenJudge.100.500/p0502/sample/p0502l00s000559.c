#include <stdio.h>
int n,a[101],i,j,k;
int main(void){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            k++;
            if((a[i]%5==0)||(a[i]%3==0)){
                j++;
            }
        }
    }
    if(j==k){
        printf("APPROVED\n");
        return 0;
    }else{
        printf("DENIED\n");
        return 0;
    }
}