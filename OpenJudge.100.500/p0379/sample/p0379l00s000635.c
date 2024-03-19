#include<stdio.h>
int main(void){
int i,j,n,m;
scanf("%d %d\n",&n ,&m);
int a[n][m],b[m],add[n];
for(i=0;i < n;i++){
for(j=0;j < m;j++){
scanf("%d",&a[i][j]);
}
scanf("\n");
add[i]=0;
}
for(j=0;j < m;j++){
scanf("%d\n",&b[j]);
}
for(i=0;i < n;i++){
for(j=0;j < m;j++){
add[i] += a[i][j]*b[j];
}
printf("%d\n",add[i]);
}
return 0;
}