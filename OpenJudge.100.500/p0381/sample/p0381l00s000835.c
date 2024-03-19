#include<stdio.h>
int main(void){
int n,x,i,r,t,f=0;
int kekka=0;
while(1){
scanf("%d %d",&n,&x);
if(n==0&&x==0){break;}
else{
for(i=1;i<n;i++){
for(r=i+1;r<n;r++){
for(t=r+1;t<=n;t++){
if(i+r+t==x){kekka+=1;f=1;break;}
}
if(f==1){f=0;break;}
}
}
printf("%d\n",kekka);
kekka=0;
}
}
return 0;
}