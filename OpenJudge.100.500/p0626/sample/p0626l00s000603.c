#include<stdio.h>

int main(){
int D;
int N;
scanf("%d%d",&D,&N);
if(D==0){
printf("%d",N*1);
}if(D==1){
printf("%d",N*100);
}if(D==2){
printf("%d",N*10000);
}
}