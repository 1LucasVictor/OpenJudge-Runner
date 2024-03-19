#include<stdio.h>
int main(){
  int in[16],out[16],ki=1,ko=0;
  int n;

  scanf("%d",&n);
  in[0]=n;
  while(1){
    if(in[0]==0) break;
    scanf("%d",&n);
    if(n==0){
      ki--;
      out[ko]=in[ki];
      ko++;
      in[ki]=0;
      ki--;
    }
    else in[ki]=n; ki++;
  }
  for(int i=0;i<ko;i++){
    printf("%d\n",out[i]);
  }
  return 0;
}