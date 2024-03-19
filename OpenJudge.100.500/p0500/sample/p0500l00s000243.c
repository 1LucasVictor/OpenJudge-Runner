#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef long long ll;

int main(void){
  int i,j;
  //  dic_t dic[200000];
  //  int ii[9];
  //  int ij[9];
  char ans[3];

  //  int ilen[100];
  //  int ia,ib,ic;
  int len,keta;
  int si,ci;
  ans[0] = ' ';
  ans[1] = ' ';
  ans[2] = ' ';
  scanf("%d %d\n",&keta,&len);
  if(len == 0 &&keta ==1){
    printf("0\n");
    return 0;
  }
  else if(len == 0){
    printf("-1\n");
    return 0;
  }
  for(i=0;i<len;i++){
    scanf("%d %d\n",&si,&ci);
    if(ans[si-1] == '0'+ci){
      ;
    }
    else if(ans[si-1] == ' '){
      ans[si-1]='0'+ci;
    }
    else{
      printf("-1\n");
      return 0;
    }
  }
  for(j=0;j<3;j++){
    if(ans[j]== ' '){
      ans[j]='0';
    }
  }
  if(ans[0]== '0'){
    printf("-1\n");
    return 0;
  }
  for(j=0;j<keta;j++){
    printf("%c",ans[j]);
  }
  printf("\n");
  return 0;


}
