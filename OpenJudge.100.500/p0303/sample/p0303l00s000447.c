#include <stdio.h>
#define N 100000

int main(){
  int Bnum, Tmax, Tnum = 1;
  int Bwei[N], Twei = 0;
  int Tminwei = 0;
  int i;
  
  scanf("%d%d",&Bnum, &Tmax);

  for(i = 0; i < Bnum; i++){
    scanf("%d", &Bwei[i]);
    Tminwei += Bwei[i];
    /*
    if(Bwei[i] > Tminwei){
      Tminwei = Bwei[i];
    }
    */
  }

  Tminwei = Tminwei/Tmax;
  
  // printf("start %d\n", Tminwei);
  i = 0;
  
  while(i != Bnum){
    
    Twei += Bwei[i];
    i++;
    
    if(Twei > Tminwei){
      Tnum++;
      Twei = 0;
      i--;
    }
    
    if(Tnum > Tmax){
      Tminwei++;
      Tnum = 1;
      i = 0;
    }    
    // printf("i:%d  Twei:%d Tnum:%d\n",i, Twei, Tnum);
  }

  printf("%d\n", Tminwei);
  
  return 0;
}

