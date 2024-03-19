#include<stdio.h> 
  
int main(){ 
  
  int n,i,flgx,flgy,j; 
  double x[4],y[4],kata,kata2; 
  
  
  scanf("%d",&n); 
  
  for(i=0;i<n;i++){ 
    for(j = 0;j < 4;j++){ 
    scanf("%lf",&x[j]);     
    scanf("%lf",&y[j]); 
    }   
      
    flgx = flgy =0; 
  
    if( (x[0]-x[1])!=0 )kata = (y[0] - y[1])/(x[0] - x[1]); 
      
    else flgx = 1;  
      
    if( (x[2]-x[3])!=0 )kata2 = (y[2] - y[3])/(x[2] - x[3]); 
      
    else flgy = 1;  
  
    if(kata == kata2||(flgx == 1&&flgy == 1))printf("YES\n"); 
  
    else printf("NO\n"); 
  } 
    
  return 0; 
} 