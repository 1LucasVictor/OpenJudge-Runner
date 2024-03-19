#include<stdio.h>
   
int main(){
  int i,j,count=0,sum;
int a[3],b[3];
  while(1){
if(scanf("%d %d",&a[i],&b[i]) == EOF){break;}
i++;
}
for(j = 0;j<i;j++){
sum = a[j]+b[j];
while(sum >0){
sum/=10;
count++;
}printf("%d\n",count);
count = 0;
}
}