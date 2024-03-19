#include <stdio.h> 
int main(void)
{
int i, j, k, n, m, l, f[128][128], s[128][128];
long a[128][128] = {{0}};
 
scanf("%d %d %d",&n,&m,&l);
 
for(i = 1; i <= n; i++){
for(j = 1; j <= m; j++){
scanf("%d",&f[i][j]);
}
}
 
for(i = 1; i <= m; i++){
for(j = 1; j <= l; j++){
scanf("%d",&s[i][j]);
}
}
 
for(i =1; i <= n; i++){
for(j = 1; j <= l; j++){
for(k =1; k <= m; k++){
a[i][j] += f[i][k] * s[k][j];
}
}
}
 
for(i = 1; i <= n; i++){
for(j = 1; j <= l; j++){
printf("%ld",a[i][j]);
if(j != l)
printf(" ");
}
printf("\n");
}
 
return 0;
}