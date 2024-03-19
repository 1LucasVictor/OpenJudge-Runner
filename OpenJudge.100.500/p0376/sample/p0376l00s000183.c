#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    int array[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    for(i=n-1;i>=0;i--){
        printf("%d",array[i]);
        if(i == 0){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    
    return 0;
}