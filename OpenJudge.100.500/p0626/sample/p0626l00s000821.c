#include<stdio.h>

int main(){
int D;
int N;
scanf("%d %d",&D,&N);
if(D==0 && N<=99){
printf("%d",N*1);
if(D==0 && N==100){
printf("%d",(N+1)*1);
}
}if(D==1 && N<=99){
printf("%d",N*100);
if(D==1 && N==100){
printf("%d",(N+1)*100);
}
}if(D==2 && N<=99){
printf("%d",N*10000);
if(D==0 && N==100){
printf("%d",(N+1)*10000);
}
}
}