#include <stdio.h>
int main(void){
int a,b,c;
scanf("%d %d",&a,&b);
if ( a == 0 ){
c = b ;
} else {
c = 100 ^ a * b;
}
printf("%d\n ",c);
return 0;
}
