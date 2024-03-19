#include<stdio.h>

int main(){

int i,j,k,h,n,m;

scanf("%d %d",&n,&m);
int A[n][m];
int b[m];



for(i = 0; i < n; i++){
  for(j = 0; j < m; j++){
  scanf("%d ",&A[i][j]);
  }
}

for(k = 0; k < m;k++){
  scanf("%d",&b[k]);
  }


for(i = 0; i < n;i++){
int c = 0;
  for(h = 0; h < m;h++){
  c += A[i][h]*b[h];
  }
printf("%d\n",c);
}

return 0;
}
