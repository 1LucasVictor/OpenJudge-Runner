#include<stdio.h>
#include<limits.h>
#define WHITE 0
#define BLACK 2
#define GRAY 1

int pa[101];
int A[101][101];
int Cost[101];
int CL[101];
int NT[101];
int cnt;
int sum;
int n;
void MST(int);
int main(){
int i,j,x;    
 scanf("%d",&n);
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         scanf("%d",&x);
         if(x==-1)
         A[i][j]=INT_MAX;
         else
         A[i][j]=x;
     }
 }
MST(0);
for(i=0;i<n;i++)
sum+=Cost[i];
printf("%d\n",sum);
return 0;

}
void MST(int x){
int i,mincost,u,j;
for(i=0;i<n;i++){
Cost[i]=INT_MAX;
pa[i]=-1;
CL[i]=WHITE;
}
cnt=0;
NT[cnt++]=x;
CL[x]=WHITE;
    Cost[x]=0;

  
   while(1){
       mincost=INT_MAX;
       for(i=0;i<n;i++){
           
           if(Cost[i]<mincost&&CL[i]!=BLACK){
               mincost=Cost[i];
               u=i;
           
           
           }
       }
       if(mincost==INT_MAX)
       break;
       CL[u]=BLACK;
 
           for(j=0;j<n;j++){
           if(CL[j]!=BLACK&&A[u][j]<Cost[j]){
               Cost[j]=A[u][j];
               pa[j]=u;
           }
           
       }
	   //for(i=0;i<n;i++)
	   //printf("%d %d\n",Cost[i],CL[i]);
   }
}

