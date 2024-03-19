#include<stdio.h>

int main(void){

int r=100000;
int n;

scanf("%d",&n);


for(int i = 0; i<n; i++){
 r = r*1.05;

if(r%1000 > 0){
r=r/1000*1000+1000;
}
}
printf("%d\n",r);

return 0;
}
