#include<stdio.h>
int main(void){
int v[100][100];
int i,r,n,t,sum=0;
int b[100];
scanf("%d %d",&i,&r);
for(n=0;n<i;n++){
for(t=0;t<r;t++){
scanf("%d",&v[n][t]);
}
}
for(n=0;n<r;n++){
scanf("%d",&b[n]);
}
for(n=0;n<i;n++){
for(t=0;t<r;t++){
sum+=b[t]*v[n][t];
}
printf("%d\n",sum);
sum=0;
}
return 0;
}