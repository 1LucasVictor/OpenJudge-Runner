#include<stdio.h>
#include<string.h>
#define N 100005

int main(){
  int n, q, time[N], i, sumT1=0, sumT2=0, T;
  char name[N][10];
  
  scanf("%d%d", &n, &q);
  for(i=0; i<n; i++)
    scanf("%s%d", name[i], &time[i]);

  for(i=0; i<n; i++)
    sumT1 += time[i];
  //printf("%d\n", sumT1);
    
  i=0;
  while(sumT1 != sumT2){
    T = time[i] - q;
    
    if(T > 0){
      sumT2 +=  q;
      time[n] = T;
      strcpy(name[n], name[i]);
      n++;
    }

    else{
      sumT2 += time[i];

      printf("%s %d\n", name[i], sumT2);   
    }
    //printf("%d\n", sumT2);
    
    i++;
  }
  return 0;
}

