#include <stdio.h>

int main(){
  long data, sum, max;
  int i, j, k;
  int num, nnum;
  long setdata[5000];
  int isPos;

  while(1){
    scanf("%d", &num);
    if(num==0) break;
    isPos=1; nnum=0; sum=0;
    setdata[0]=0;
    for(i=0; i<num; i++){
      scanf("%ld", &data);
      if(data==0) continue;
      if(data>0 && isPos==0){
        setdata[nnum]=sum;
        sum=data;
        nnum++; isPos=1;
      }
      else if(data<0 && isPos==1){
        setdata[nnum]=sum;
        sum=data;
        nnum++; isPos=0;
      }
      else {
        sum+=data;
      }
    }
    if(sum!=0){
      setdata[nnum]=sum;
      nnum++;
    }
    max=0;
    for(i=0; i<nnum; i++){
      for(j=i; j<nnum; j++){
        sum=0;
        for(k=i; k<=j; k++){
          sum+=setdata[k];
        }
        if(max<sum) max=sum;
      }
    }
  printf("%ld\n", max);
  }

  return 0;
}