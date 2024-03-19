#include <stdio.h>

int main(void){
    int a[5],k,flag;
    flag=0;
    
    for(int i=0; i<5; i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    
    for(int i=0; i<5; i++){
        if(a[i]>k)
            flag=1;
    }
    
    if(flag==0)
        printf("Yay!");
    else
        printf(":(");
}
