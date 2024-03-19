#include <stdio.h>


int main() {
int i,j=0;
int n,b,k=0,u;
int adj[100][100];
int m[100][100];

scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<100;j++){
scanf("%d",&adj[i][j]);
k++;
if(adj[i][1]==k-2) break;
      
}
k=0;
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
m[i][j]=0;
}
}
for(i=0;i<n;i++){
for(j=2;j<n;j++){
b=adj[i][j];
m[i][b-1]=1;
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",m[i][j]);
}
printf("\n");
}
  
return 0;
}