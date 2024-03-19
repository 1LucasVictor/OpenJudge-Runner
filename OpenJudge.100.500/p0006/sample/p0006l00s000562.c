#include<stdio.h>

int main(void){

int r=100000,n,a;

scanf("%d",&n);


for(int i = 0; i<n; i++){
 r = r*1.05;
}

if(r%10000 > 0){
a=r%10000;
r=r+(10000-a);
}
printf("%d\n",r);

return 0;
}
