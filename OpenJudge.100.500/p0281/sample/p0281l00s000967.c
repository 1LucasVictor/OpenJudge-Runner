#include <stdio.h>

int main(){
   int i, j, k;
   int a, b, c, n;
   int num, N[100][100],color[100],d[100];
   
   scanf("%d", &n);
   
   for(i=0; i<n; i++){
      for(j=0; j<n; j++){
         N[i][j]=100000;
      }
   }

   for(i=0; i<n; i++){
      scanf("%d%d",&a, &c);
         for(j=0; j<c; j++){
            scanf("%d",&b);
            scanf("%d",&N[a][b]);
         }
    }

    for(i=0; i<n; i++){
       d[i] = 100000;
       color[i] = 0;
    }
    d[0] = 0;

   while (1){
      k = 100000;
   for(i=0; i<n; i++){
      if(color[i] != 1 && d[i] < k){
          k = d[i];
          num = i;
      }
   }
   if(k == 100000) break;
   color[num] = 1;
   
   for(i=0; i<n; i++){
      if(color[i] != 1 && d[num]+N[num][i] < d[i]){
         d[i] = d[num]+N[num][i];
       }
   }
   }

   for (i=0; i<n; i++){
       printf("%d %d\n",i, d[i]);
   }

   return 0;
}