#include <stdio.h>

int main(void){ 

int a,b,c,i=0,Count=0;  

scanf("%d %d %d",&a,&b,&c);  

for(i=a;i<=b;i++){ 

if(c%i==0){ 

Count++; 

} 

} 

printf("%d\n",Count);   

return 0;

}