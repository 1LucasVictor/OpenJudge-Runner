#include<stdio.h>
 
int main(void){
  int N;
  int b,i,d;
  int a[21000] = {0};
  
  scanf("%d",&N);
  for(i=2;i<=N;i++){
    scanf("%d",&b);
    a[b]++;
  }
 for(d=1;d<=N;d++){
 printf("%d\n",a[d]);
 }
return 0;
}
 