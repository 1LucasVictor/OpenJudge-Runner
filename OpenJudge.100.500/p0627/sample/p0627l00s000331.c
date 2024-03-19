#include<stdio.h>

int a,b;
int sum,kake,hiki;

int main(){


scanf("%d",&a);
scanf("%d",&b);

sum = a+b;
hiki = a-b;
kake = a * b;

if(sum >= hiki && sum >= kake ){
    printf("%d",sum);
}else if(hiki >= sum && hiki >= kake){
    printf("%d",hiki);
}else if(kake >= sum && kake >= hiki){
    printf("%d",kake);
}

return 0;
}
