#include<stdio.h>
int main(void){
int n,m,l,i,j,k;
int A[100][100],B[100][100];
long C[100][100];
for(i=0;i < 100;i++){
for(j=0;j < 100;j++){
A[i][j]=0;
B[i][j]=0;
C[i][j]=0;
}
}
scanf("%d %d %d",&n ,&m ,&l);
for(i=0;i < n;i++){
for(j=0;j < m;j++){
if (j == m-1){
scanf("%d\n",&A[i][j]);
}else{
scanf("%d ",&A[i][j]);
}
}
}
for(i=0;i < m;i++){
for(j=0;j < l;j++){
if (j == l){
scanf("%d\n",&B[i][j]);
}else{
scanf("%d ",&B[i][j]);
}
}
}
for(i=0;i < n;i++){
for(j=0;j < l;j++){
for(k=0;k < m;k++){
C[i][j] += A[i][k]*B[k][j];
}
if (j == l-1){
printf("%ld\n",C[i][j]);
}else{
printf("%ld ",C[i][j]);
}
}
}
return 0;
}