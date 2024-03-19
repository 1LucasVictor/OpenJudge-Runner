#include<stdio.h>


#define MAX 101
#define INF 2001
 
int main(){
int i,j,n,u,v,sum=0,mincost,E[MAX][MAX],color[MAX],d[MAX];
 
scanf("%d",&n);
for(i=1 ; i<=n ; i++){
for(j=1 ; j<=n ; j++){
scanf("%d",&E[i][j]);
if(E[i][j]==-1)E[i][j]=INF;
}
}
 


for(u=1 ; u<=n ; u++){
d[u]=INF;
color[u]=0;      //white
}


d[1]=0;
 
while(1){
mincost=INF;
for(i=1 ; i<=n ; i++){
if(color[i] != 1 && d[i] < mincost){
mincost=d[i];    
u=i;
}
}
    
if(mincost==INF)break;
color[u] = 1;     //black

for(v=1 ; v<=n ; v++){
if(color[v] != 1 && E[u][v] < d[v]){
d[v]=E[u][v];
}
}
}
   
for(i=1 ; i<=n ; i++){
sum += d[i];
}
 
printf("%d\n",sum);
 
return 0;
}