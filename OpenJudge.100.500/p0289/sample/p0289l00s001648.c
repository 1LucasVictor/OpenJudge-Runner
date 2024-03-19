#include<stdio.h>

int main(void){
    int a,b,z=1;
    
    scanf("%d %d",&a,&b);
    
    if(a<b){
        z=b;
        b=a;
        a=z;
    }
    
    while(z!=0){
        z=a%b;
        a=b;
        b=z;
    }
    
    printf("%d\n",a);
    
    return 0;
}
