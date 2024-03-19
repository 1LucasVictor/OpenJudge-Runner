#include<stdio.h>

int m[45];

int fi(int);

int main(){
  int n,i;
  scanf("%d",&n);
  
  for(i=0;i<45;i++)m[i]=-1;
  
  printf("%d\n",fi(n));
  
  return 0;
}

int fi(int f){
  if(f==0 || f==1)return m[f]=1;
  if(m[f] != -1)return m[f];
  return m[f]=fi(f-1)+fi(f-2);
}

