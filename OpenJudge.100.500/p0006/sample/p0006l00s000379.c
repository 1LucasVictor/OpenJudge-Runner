#include<stdio.h>
int main(){
int a,i=100000,b;
scanf("%d",&a);
for(b=0;b<a;b++){
i=i*1.05;
if(i%1000!=0){
i=i/1000;
i=i*1000+1000;
}
}
printf("%d\n",i);
return 0;
}
