#include <stdio.h>

int main(void){
    int a[5],k,max;
    max=0;
    
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }
    scanf("%d",&k);
    
    if(max<=k)
        printf("Yay!");
    else
        printf(":(");
}
