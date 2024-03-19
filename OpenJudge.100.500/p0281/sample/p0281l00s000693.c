#include<stdio.h>

#define MAX 100
 #define INF 1000000
#define W 1
 #define B 2
 int A[MAX][MAX], u, d[MAX];

void DIJ(int n){
   int minc, i, color[MAX], v, pi[MAX];

   for(i=0 ; i<n ; i++){
     color[i] = W;
     d[i] = INF;
   }
   d[0] = 0;

   
   while(1){
     minc = INF;
     for(i=0 ; i<n ; i++){
       if(color[i] != B && d[i] < minc){
	 minc = d[i];
	 v = i;
       }
     }
     if(minc == INF)break;
     color[v] = B;
     for(i=0 ; i<n ; i++){
       if(color[i] !=B && d[v]+A[v][i]<d[i]){
	 pi[i] = v;
	 d[i] = d[v] + A[v][i];
       }
     }
   }
  
 }

 
int main(){
  int n, k, v, i, j,a;
   scanf("%d",&n);

   for(i=0 ;i<n; i++){
     for(j=0 ; j<n ; j++)A[i][j] = INF;
   }
   
   for(i=0 ; i<n ; i++){
     scanf("%d%d",&u,&k);
     for(j=0 ; j<k ; j++){
       scanf("%d%d",&v,&a);
     A[u][v] = a;
     }
   }
  
   DIJ(n);
   
   for(i=0 ;i<n ;i++){
     printf("%d %d\n",i, d[i]);
   } 
   return 0;
}

