#include <stdio.h>

int main(){
  long data, sum, max;
  int i, j, k;
  int num, nnum;
  long setdata[2][5001], tmp;
  int isNeg, focus;

  while(1){
    scanf("%d", &num);
    if(num==0) break;
    nnum=-1; isNeg=0;
    for(i=0; i<num; i++){
      scanf("%ld", &tmp);
      if(isNeg && tmp<0) setdata[0][nnum]+=tmp;
      else {
        nnum++;
        setdata[0][nnum]=tmp;
        if(tmp<0) isNeg=1;
	else isNeg=0;
      }
    }
    nnum++;

    max=-100001;
    for(i=0; i<nnum; i++){
      if(max<setdata[0][i]) max=setdata[0][i];
    }
    focus=1;
    for(i=nnum-1; i>=1; i--){
      for(j=0; j<i; j++){
        if(i==nnum-1){
          setdata[1][j]=setdata[0][j]+setdata[0][j+1];
          if(max<setdata[1][j]) max=setdata[1][j];
        }
        else {
          setdata[focus][j]=setdata[1-focus][j]+setdata[1-focus][j+1]-setdata[focus][j+1];
          if(max<setdata[focus][j]) max=setdata[focus][j];
        }
      }
      focus=1-focus;
    }
  printf("%ld\n", max);
  }

  return 0;
}