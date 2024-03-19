#include<stdio.h>
int main(){
int x,y,n,a[200][200],i,j,dic[10][200],min=210000000,k,v,ans;
scanf("%d\n",&n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
a[i][j]=0;    
}
}
for(j=0;j<n;j++){
scanf("%d %d",&v,&k);
for(i=0;i<k;i++){
scanf("%d %d",&x,&y);
a[v][x]=y;
}
scanf("\n");
}
for(i=0;i<n;i++){
dic[0][i]=0;
dic[1][i]=210000000;
}
dic[1][0]=0;
for(k=0;k<n;k++){
for(j=0;j<n;j++){
if(min>dic[1][j] && dic[0][j]==0){
ans=j;
min=dic[1][j];
}
}
min=210000000;
for(i=0;i<n;i++){
if(a[ans][i]!=0 && dic[1][i]>a[ans][i]+dic[1][ans]){
dic[1][i]=a[ans][i]+dic[1][ans];
}
}
dic[0][ans]=1;
}
for(i=0;i<n;i++){
printf("%d %d\n",i,dic[1][i]);
}
return 0;
}
