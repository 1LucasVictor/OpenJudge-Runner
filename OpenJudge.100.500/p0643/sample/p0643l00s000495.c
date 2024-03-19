#include <stdio.h>

int main(){
int a,b,c;

scanf("%d",&a);
scanf("%d",&b);

c = a * b;

if(c % 2 == 1){
        printf("Odd\n");

}else{
        printf("Even\n");

}
return 0;

}