#include<stdio.h>
#include<stdlib.h>
int main(void){
int *N;
int n,i,j;
int S=0,c=0;
while(1){
scanf("%d",&n);
if(n>=1 && n<=10000)break;
}
N=(int*)malloc(sizeof(int)*n);
for(i=0 ; i<n ; i++){
  while(1){
  scanf("%d",&N[i]);
  if(N[i]>=2 && N[i]<=100000000)break;
  }
}
for(i=0 ; i<n ; i++){
  if(N[i]==2){S++; continue;}
  if(N[i]%2==0)continue;
  for(j=3 ; j<N[i] ; j+=2){
    if(N[i]%j==0){c=1; break;}
  }
  if(c==0){
  S++;
  }
  c=0;
}
printf("%d\n",S);
free(N);
return 0;
}
