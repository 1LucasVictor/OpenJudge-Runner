#include <stdio.h>
#include <stdlib.h>
#define N 100000
int CanLay(int n, int k, int m, int weight[]);
int CanLay(int n, int k, int m, int weight[]){
    int i;
    int sum = 0;
    int num = 1;
  
    for(i = 0; i < n; i++){
        if(weight[i] > m) return 0;
        sum += weight[i];
        if(sum > m){
            sum = weight[i];
            num++;
        }
    }
    if(num <= k) return 1;
    
    else return 0;
}
 
int main(){
  int i,n,k,l,m,r;
  int weight[N];
  
  scanf("%d %d",&n,&k);
  
  for(i=0;i<n;i++) scanf("%d",&weight[i]);
  l = 0;
  r = 10000*n/k;
    while(1){
        m = (l + r) / 2;
        if(l == m) break;
        if(CanLay(n, k, m, weight)) r = m;      
        else l = m;
      }
    printf("%d\n", r);
    return 0;
}