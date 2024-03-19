#include<stdio.h>

int main(){

int a,b,c,i,j,count;
count = 0;
scanf("%d %d %d",&a,&b,&c);

if(a > b){
i = a;
a = b;
b = i;
}
for(int j = b-a;j >= 0;j--){
 
  if(c%(a+j) == 0){
  count++;
  }
}
printf("%d\n",count);
return 0;
}
