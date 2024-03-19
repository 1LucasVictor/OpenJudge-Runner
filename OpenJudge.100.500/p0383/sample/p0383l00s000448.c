#include<stdio.h>
int main(){
long int i,j,k,n,m,l,a[110][110],b[110][110];
long  long int ans=0;
scanf("%ld %ld %ld\n",&n,&m,&l);
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%ld",&a[i][j]);
}
scanf("\n");
}
for(i=0;i<m;i++){
for(j=0;j<l;j++){
scanf("%ld",&b[i][j]);
}
scanf("\n");
}
for(i=0;i<n;i++){
for(j=0;j<l;j++){
for(k=0;k<m;k++){
ans=ans+a[i][k]*b[k][j];
}
if(j==0){
printf("%lld",ans);
}
else{
printf(" %lld",ans);
}
ans=0;
}
printf("\n");
}
return 0;
}
