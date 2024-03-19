#include<stdio.h>
#define MAX 120



int main(){
int n,i,j;
int x,y,z;
int A[MAX][MAX]={0};

scanf("%d",&n);

for(i=1;i<=n;i++){
 scanf("%d",&x);
 scanf("%d",&y);
 if(y!=0){
  for(j=0;j<y;j++){
   scanf("%d",&z);
   A[x][z]=1;
  }
 }
}

for(i=1;i<=n;i++){
 for(j=1;j<n;j++){
  printf("%d ",A[i][j]);
 }
 printf("%d\n",A[i][n]);
}



return 0;
}
