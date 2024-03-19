#include <stdio.h>
int main(void){
    int a[5],k,max,min;
    max=0;
    min=1000;
    
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    scanf("%d",&k);
    
    if(max-min<k)
        printf("Yay!");
    else
        printf(":(");
}
