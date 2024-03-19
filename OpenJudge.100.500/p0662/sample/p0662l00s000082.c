#include <stdio.h>
int main(void){
    int a,b,c,d;
    int x;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c<b){
        printf("%d",b-a-c);
        
        
        
    }else if(a==c){
        
        printf("%d\n",b-c);
    }else{
        
        printf("0\n");
    }
 return 0;
    
}