#include <stdio.h>
int main(void){
    int d,n;
    scanf("%d %d",&d,&n);
    
    int i;
    int a=1;
    
    for(i=0;i<d;i++){
        a*=100;
    }
    if(n!=100){
        printf("%d\n",a*n);
    }else{
        printf("%d\n",a*n+1);
    }
    
    return 0;
}
