#include<stdio.h>
int main(){
  int n,m,k,a[200000],b[200000],sum=0,answer=0,suma=0,sumb=0,pa=0,pb=0,c=0;
  scanf("%d %d %d",&n,&m,&k);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
    for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
 while (k>a[pa]||k>b[pb]){
  for (int i=pa;i<n;i++){
    if (sum+a[i]>k){
      break;}
    sum=sum+a[i];
    suma++;}
  sum=0;
              
  for (int i=pb;i<m;i++){
    if (sum+b[i]>k){
      break;}
    sum=sum+a[i];
    sumb++;}
  if (suma>sumb){
    c=0;}
  if (sumb>suma){
    c=1;}
  if (sumb==suma){
    if (a[pa]>b[pb]){
      c=1;
      if (b[pb]>a[pb]){
        c=0;}}}
  if (c==0){
      k=k-a[pa];
      answer++;
      pa=pa+1;
  }
  if (c==1){
      k=k-b[pb];
      answer++;
      pb=pb+1;
  }
  sum=0;
  suma=0;
  sumb=0;
 }
 printf("%d\n",answer);}