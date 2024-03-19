#include <stdio.h>
#define N 1000

int Linearsearch(int x[],int n,int key){
  int i=0;
  x[n] = key;
  while(x[i] != key) i++;
  return  n!= i;
}

int main(){
  int i,n,x[N],q,key,count;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&key);
    if(Linearsearch(x,n,key)) count++;
  }

  printf("%d\n",count);
  return 0;
}

