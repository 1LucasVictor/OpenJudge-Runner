#include<stdio.h>
int main(void){

int a,b,c,z,i;
z = 0;

scanf("%d %d %d",&a,&b,&c);

for(i=a; i<=b; i++){
if(c%i == 0){
z++;
}
}
printf("%d\n",z);

return 0;
}