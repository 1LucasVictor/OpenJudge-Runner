#include<stdio.h>

int main(){
    int a,b,add,sub,mul;
    scanf("%d",&a);
    scanf("%d",&b);

    add=a+b;
    sub=a-b;
    mul=a*b;

    
    if(add>sub && add>mul) printf("%d",add);

    else if(sub>add && sub>mul) printf("%d",sub);

    else if(mul>add && mul>sub) printf("%d",mul);

  
    if(a==0 && b==0){
        printf("%d",add);
    }

return 0;
}
