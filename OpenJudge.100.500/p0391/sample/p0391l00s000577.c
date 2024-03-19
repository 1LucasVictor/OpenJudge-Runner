#include <stdio.h>

int main(void){
  char mozi[1001], order[8], re[1001];
  int cnt=0;
  int i,j, st, ed;

  scanf("%s\n%d", mozi, &cnt);
  for(i=0;i<cnt;i++){
    scanf("%s %d %d", order, &st, &ed);
    if(order[2]=='p'){ // replace
      scanf("%s", re);
      for(j=0;j<ed-st+1;j++)   mozi[st+j] = re[j];
    }else if(order[2]=='v'){ // reverse
      for(j=0;j<ed-st+1;j++)   re[ed-st-j] = mozi[st+j];
      for(j=0;j<ed-st+1;j++)   mozi[st+j] = re[j];
    }else if(order[2]=='i') {// print
      for(j=st;j<=ed;j++)      printf("%c", mozi[j]);
      printf("\n");
    }
  }
  return 0;
}

