#include <stdio.h>

int main(void){
    int N;
  	int A,B,C,D;
    int i,j;
      scanf("%d", &N);//数値の取得
   scanf("%d", &A);//数値の取得
   scanf("%d", &B);//数値の取得
   scanf("%d", &C);//数値の取得
   scanf("%d", &D);//数値の取得
    char str[N];
  scanf("%s",str);
  
  int pa,pb;
  pa = A-1;
  pb = B-1;
  int checkb =0;
  int pbsave = 0;
  while(pb < D-1){
    pbsave = pb;
  if(str[pb+1] == '.' && pb <= D-2){
      pb = pb + 1;
      if(pb == D-1){
		checkb = 1;
        break;
      }
    }else if(str[pb+2] == '.' && pb <= D-3){
		pb = pb +2;
       if(pb == D-1){
		checkb = 1;
        break;
      }
    }
    if(pbsave == pb){
		printf("No");
    	return 0;
    }
  }
  if(checkb == 0){
   printf("No");
    return 0;
  }
  int pasave;
  checkb = 0;
  
  while(pa < C-1){
    pasave = pa;
 	if(str[pa+1] == '.' && pa <= C-2){
      pa = pa + 1;
      if(pa == C-1){
		checkb = 1;
        break;
      }
    }else if(str[pa+2] == '.' && pa <= C-2){
		pa = pa +2;
       if(pa == C-1){
		checkb = 1;
        break;
      }
    }
    if(pasave == pa){
		printf("No");
    	return 0;
    }
  }
  if(checkb == 0){
   printf("No");
    return 0;
  }
  printf("Yes");
    //int max = max(a, N);
    return 0;     
}
