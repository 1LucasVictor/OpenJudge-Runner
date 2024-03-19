#include<stdio.h>
int main(void){
int n,p,q,i,j;
while(scanf("%d",&n)!=EOF){
q=0;
for(i=2;i<=n;i++){
p=0;
for(j=2;j<i;j++){
if(!(i%j==0))
p++;
}
if(i==p+2)
q+=1;
}
printf("%d\n",q);
}
return 0;
}