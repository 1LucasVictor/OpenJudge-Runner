#include <stdio.h>
int main(void){
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if(c<a){
        printf("NO\n");
    }else if(a+b>=c){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}
