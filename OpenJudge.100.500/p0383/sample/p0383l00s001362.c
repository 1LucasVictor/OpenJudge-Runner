#include<stdio.h>

int main(void){

int a[100][100];
int b[100][100];
int c[100][100] = {0};
int n,m,l,k;

scanf("%d %d %d",&n,&m,&l);

for(int i = 0; i<n; i++){
   for(int j =0; j<m; j++){
   scanf("%d",&a[i][j]);
   }
}

for(int j = 0; j<m; j++){
    for(int k = 0; k<l; k++){
   scanf("%d",&b[j][k]);
}
}

for(int i = 0; i < n; i++){
   for(int j = 0; j<m; j++){
       for(int k = 0; k<l; k++){
    c[i][k] += a[i][j] * b[j][k];
    
}
}
}
for(int i = 0; i<n; i++){
   for(k = 0; k<l-1; k++){
printf("%d ",c[i][k]);
}
printf("%d\n",c[i][l-1]);
}

return 0;
}


