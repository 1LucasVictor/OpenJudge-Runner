#include<stdio.h>
int main(){
int x[100],a,k=0,y[100],i,m=0;
while(scanf("%d",&a)!=EOF){
if(a==0)
y[m++]=x[--k];
else if(a!=0){
x[k]=a;
k++;
}
}
for(i=0;i<m;i++)
printf("%d\n",y[i]);
return 0;
}