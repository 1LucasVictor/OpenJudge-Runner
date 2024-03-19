#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c,tmp;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(b<a){
        tmp=a;
        a=b;
        b=tmp;
    }
    
    if(c<b){
    tmp=b;
    b=c;
    c=tmp;
    }
    
    if(b<a){
    tmp=a;
    a=b;
    b=tmp;
    }
    
    printf("%d %d %d\n",a,b,c);
    return 0;
    
    
    }
        
 
    
