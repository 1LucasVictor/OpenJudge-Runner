#include <stdio.h>
#define INF (1<<21)

int main(void)
{
int i,j,n,m,ans=0,min,a[101][101],b[101],c[101];

scanf("%d",&n);

for(i=0;i<n;i++){
for(j=0;j<n;j++){

scanf("%d",&a[i][j]);
if(a[i][j]==-1) a[i][j]=INF;

}
}

for(i=0;i<101;i++){
b[i]=0;
c[i]=INF;
}

c[0]=0;

while(1){

min=INF;
m=-1;

for(i=0;i<n;i++){
if(b[i]) continue;
if(c[i]<min){
min=c[i];
m=i;
}
}

if(m==-1) break;

b[m]=1;
ans+=c[m];

for(i=0;i<n;i++){
if(b[i]) continue;
if(a[m][i]<c[i]){
c[i]=a[m][i];
}
}
}

printf("%d\n",ans);

return 0;
}

