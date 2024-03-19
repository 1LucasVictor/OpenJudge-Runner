#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;
    int n;
    int i;
    
    scanf("%d", &n);
    
    a = (int *) malloc(sizeof(int)*n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=n-1; i>=0; i--){
        if(i==0){
            printf("%d\n", a[i]);
        }
        else{
            printf("%d ", a[i]);
        }
    }
    
    free(a);
    return 0;
}