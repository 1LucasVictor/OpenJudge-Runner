  


#include<stdio.h>

int main(void){

int a,b,c,B,C;

scanf("%d %d %d",&a,&b,&c);

if(a>b){  

B=b;  

b=a;  

a=B;

}  

if(a>c){  

C=c;  

c=a;  

a=C;  

}    

if(b>c){

C=c;    

c=b;    

b=C;    

}  

printf("%d %d %d\n",a,b,c);

return 0;

}
 