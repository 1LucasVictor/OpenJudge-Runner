#include<stdio.h>

int main(void){
    int a[3],i,j,tmp;
    
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<2;i++){
        for(j=2;j>i;j--){
            if(a[j]<a[j-1]){
                tmp=a[j-1];
                a[j-1]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<3;i++){
        if(i==2){
            printf("%d\n",a[i]);
        }else{
            printf("%d ",a[i]);
        }
    }
    return 0;
    
}
