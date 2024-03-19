#include<stdio.h>

int god(int x,int y){

if( y == 0 ) return x; 
else return god(y,x%y);
}

int main(){
int a,b;

scanf("%d%d",&a,&b);

if( a >= b ) printf("%d\n",god(a,b));
else  printf("%d\n",god(b,a));

return 0;
}