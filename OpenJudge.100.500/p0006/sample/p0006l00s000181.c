#include<stdio.h>
int main(){
int n,i,k=100000;
scanf("%d",&n);
for(i=0;i<n;i++){
k*=1.05;
if(k%1000!=0){
k=k/1000;
k=k*1000+1000;
}
}
printf("%d\n",k);
return 0;
}