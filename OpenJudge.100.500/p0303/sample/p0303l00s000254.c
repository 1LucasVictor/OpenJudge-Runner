#include <stdio.h>
#define N 100000
int CanLay(int); 
int n, k, w[N];
int main(void){
    int i, P, max=1, ave=0;
     
    scanf("%d %d",&n,&k);
    for (i=0; i<n; i++) {
      scanf("%d",&w[i]);
      if(max<w[i]) max = w[i];
      ave += w[i];
    }
    
    ave /= k;
    if(ave > max) P = ave;
    else P = max;
    while (CanLay(P)==0)  P++;        
    printf("%d\n",P);    
    return 0;
}

int CanLay(int P){
  int i, temp, sum;
  
    temp = sum = i = 0;
    while (i < n) {
      if( sum + w[i] <= P )   sum += w[i];
      else {
	sum = 0;
	temp++;
	if(temp >= k) return 0;
        continue;
      }
      i++;
    }
    return 1;
}