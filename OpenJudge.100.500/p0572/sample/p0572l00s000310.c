#include<stdio.h>
 
int main(){
  int i, j, cal, min = 2018;
  
  int L, R;
  scanf("%d %d", &L, &R);
  
  if(R-L >= 2019){
    
    min = 0;
    
  }else{
    
    for(i = L; i < R; i++){
      for(j = i+1; j <= R; j++){
        cal = (i % 2019) * (j % 2019) % 2019;
        if(cal < min){
          min = cal;
        }
      }
    }
    
  }
  
  printf("%d", min);
  
  return 0;
}