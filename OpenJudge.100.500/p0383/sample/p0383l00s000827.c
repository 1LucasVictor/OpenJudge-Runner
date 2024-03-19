#include <stdio.h>
int main(void){
int i,j,k;
int n,m,l;
double a[100][100],b[100][100];
double c[100][100]={0};

scanf(" %d %d %d",&n,&m,&l);
for(i = 0;i < n;i++){
for(j = 0;j < m;j++){
scanf("%lf",&a[i][j]);
}
}
for(i = 0;i < m;i++){
for(j = 0;j < l;j++){
scanf("%lf",&b[i][j]);
}
}

for(i = 0;i < n;i++){
for(j = 0;j < l;j++){
for(k = 0;k < m;k++){
c[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i = 0;i < n;i++){
for(j = 0;j < l;j++){
printf("%.0f",c[i][j]);
if(j != l-1) printf(" ");
else printf("\n");
}
}
return 0;
}

