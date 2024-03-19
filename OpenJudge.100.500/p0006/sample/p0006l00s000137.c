#include<stdio.h>

int main(void){

int r=100000;
int n,a;

scanf("%d",&n);


for(int i = 0; i<n; i++){
 r = r*1.05;

if(r%1000 > 0){
a=r%1000;
r=r+1000-a;
}
}
printf("%d\n",r);

return 0;
}
