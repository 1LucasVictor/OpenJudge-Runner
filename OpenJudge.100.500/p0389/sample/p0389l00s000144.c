#include <stdio.h>
#include <string.h>

int main(void){
  char mozi[201], cpmz[201];

  while(1){
    int i=0, j, cnt=0, p; //cnt シャッフル回数
    int len;
    scanf("%s", mozi);
    if(mozi[0]=='-')   break;
    len = strlen(mozi);
    scanf("%d", &cnt);
    while(i<cnt){
      scanf("%d", &p);
      for(j=0; j<p; j++)
        cpmz[j+len-p] = mozi[j];
      for(j=p; j<len; j++)
        cpmz[j-p] = mozi[j];
      i++;
      for(j=0;j<len;j++)
        mozi[j] = cpmz[j];
    }
    printf("%s\n", mozi);
  }

  return 0;
}

