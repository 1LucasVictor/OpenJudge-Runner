#include<stdio.h>
int main(void){
int n,m,a,aa,A[100][100],b[100],sum=0;
scanf("%d %d",&n,&m);
for(a=0;a<n;a++)for(aa=0;aa<m;aa++)scanf("%d ",&A[a][aa]);
for(a=0;a<m;a++)scanf("%d",&b[a]);
for(a=0;a<n;a++){
for(aa=0;aa<m;aa++){
sum+=A[a][aa]*b[aa];
}
printf("%d\n",sum);
sum=0;
}

return 0;
}
