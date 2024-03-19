#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,i;
 scanf("%d",&n);
 int* p;
 p=malloc((n+1)*sizeof(int));
 for(i=0;i<n;i++){
  scanf("%d",&p[i]);}
 for(i=1;i<n;i++){
  printf("%d ",p[n-i]);}
 printf("%d\n",p[0]);
 free(p);
 return 0;}