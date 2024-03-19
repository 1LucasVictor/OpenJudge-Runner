#include<stdio.h>
#include<stdlib.h>
#define N 101
#define E 200001
int main(){
  int i,j,min,p,q,l,n;
  int a[N][N],d1[N],d2[N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    d1[i]=0;
    d2[i]=E;
    for(j=0;j<n;j++){
      a[i][j]=-1;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&p,&q);
    for(j=0;j<q;j++){
      scanf("%d",&l);
      scanf("%d",&a[p][l]);
    }
  }
  d2[0]=0;
  while(1){
    min=E;
    for(i=0;i<n;i++){
      if(d1[i]!=1&&d2[i]<min){
        min=d2[i];
        p=i;
      }
    }
    if(min==E){
      break;
    }
    for(i=0;i<n;i++){
      if(a[p][i]!=-1&&d1[i]!=1&&d2[p]+a[p][i]<d2[i])
      d2[i]=d2[p]+a[p][i];
    }
d1[p]=1;
}
for(i=0;i<n;i++){
printf("%d %d\n",i,d2[i]);
}
return 0;
}

