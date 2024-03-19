#include<stdio.h>
#include<limits.h>
  
int main(){
  
  int M[105][105],d[105],array[105],P[105];
  int i,j,ji,n;
  int ans = 0,ka = 1,min = 0;
   
  scanf("%d",&n);
   
  for(i = 0; i < n; i++){
   
    for(j = 0; j < n; j++){
      scanf("%d",&M[i][j]);
    }
     
    d[i] = INT_MAX;
    array[i] = 0;
     
  }
   
  d[0] = 0;
  array[0] = 1;
  P[0] = 0;
   
//M[0][0]
 
  while(1){
 
    for(i = 0; i < ka ; i++){
      for(j = 0 ; j < n ; j++){
 
      if(array[P[i]] == 0 || array[j] == 0){
        if(M[P[i]][j] != -1 && d[ka] >= M[P[i]][j]){
 
          d[ka] = M[P[i]][j];
                        ji = j;
 
        }
      }
    }
      }
 
      ka++;
      array[ji] = 1;
      P[i] = ji;
 
      if(ka > n) break;
 
  }
     
    for(i = 0; i < n; i++){
      ans += d[i];
    }
 
    printf("%d\n",ans);
 return 0;
}