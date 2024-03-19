#include <stdio.h>
#include <stdlib.h>

void BubSort(int *x, char **y, int n);
void SelSort(int *x, char **y, int n);
void ShowData(char **x, int n);
void AtoI(char **a, int *in, int n);
void Judge(char **x, char **y, int n);

int main() {

  int *pInt;
  int *pIntBub, *pIntSel;
  char **pChar;
  char **pCharBub, **pCharSel;
  int i;
  int n;

  scanf("%d",&n);
  
  //intメモリ領域の確保
  pInt = (int *)malloc(n * sizeof(int));
  pIntBub = (int *)malloc(n * sizeof(int));
  pIntSel = (int *)malloc(n * sizeof(int));
  
  //charメモリ領域の確保
  pChar = malloc(sizeof(char*)*n);
  for(i=0; i<n; i++)
    pChar[i] = malloc(sizeof(char) * 2);
  pCharBub = malloc(sizeof(char*)*n);
  for(i=0; i<n; i++)
    pCharBub[i] = malloc(sizeof(char) * 2);
    pCharSel = malloc(sizeof(char*)*n);
  for(i=0; i<n; i++)
    pCharSel[i] = malloc(sizeof(char) * 2);

    //入力
    for (i=0; i<n; i++)
    scanf("%s", pChar[i]);

    //atoi 
    AtoI(pChar, pInt,n);

    //コピー
    for(i=0; i<n; i++){
      pIntBub[i] = pInt[i];
      pIntSel[i] = pInt[i];
    }
    for(i=0; i<n; i++){
      pCharBub[i] = pChar[i];
      pCharSel[i] = pChar[i];
    }

    SelSort(pIntSel,pCharSel,n);
    BubSort(pIntBub,pCharBub,n);

    ShowData(pCharBub,n);
    Judge(pChar,pCharBub,n);
    ShowData(pCharSel,n);
    Judge(pChar,pCharSel,n);
    
    free(pInt);
    free(pChar);
    
    return 0;
}

void AtoI(char **a, int *in, int n){

  int i;

  for(i=0; i<n; i++){
    in[i] = atoi(&a[i][1]);
  }
}

void BubSort(int *x, char **y, int n){

  int i,j;
  int tmpInt;
  char *tmpChar;

  for(i=0; i<n-1; i++){
    for(j=n-1; j>i; j--){
      if(x[j-1] > x[j]){
	tmpInt = x[j];
	x[j] = x[j-1];
	x[j-1] = tmpInt;

	tmpChar = y[j];
	y[j] = y[j-1];
	y[j-1] = tmpChar;
      }
    }
  }
}

void SelSort(int *x, char **y, int n) {

  int i,j;
  int min;
  int tmpInt;
  char *tmpChar;

  for(i=0; i<n-1; i++){
    min = i;           //小さい値の保持
    
    for(j=i+1; j<n; j++){
      if(x[j] < x[min]){ 
	min = j;     //小さい値の更新
      }
    }
    /*sort*/
    if(x[i] > x[min]){
      tmpInt = x[i];
      x[i] = x[min];
      x[min] = tmpInt;

      tmpChar = y[i];
      y[i] = y[min];
      y[min] = tmpChar;
    }
  }
}


void ShowData(char **x, int n){

  int i;

  for(i=0; i<n; i++){
    if(i!=n-1) printf("%s ",x[i]);
    else printf("%s",x[i]);
  }

  printf("\n");
}

void Judge(char **x, char **y, int n){

 
  int i,j;
  char tmp1 = 0,tmp2 = 0,tmp3 = 0,tmp4 = 0;
  char tmpNum;
  int flag = 0;

  for(i=0; i<n-1; i++){
    if(y[i][1] == y[i+1][1]){ //同じ数字があるか判定
      tmpNum = y[i][1];            //ソート後の先に来た方を保持
      tmp1 = y[i][0];
      tmp2 = y[i+1][0];
      if(y[i][1] == y[i+2][1] && i<n-2){
	tmp3 = y[i+2][0];
	if(y[i][1] == y[i+3][1] && i<n-3){
	  tmp4 = y[i+3][0];
	}
      }
      for(j=0; j<n-1; j++){
	if(x[j][1] == tmpNum){ //数字が同じだったら文字が一緒か判定
	  if(x[j][0] == tmp1){
	    if(x[j+1][1] == tmpNum){
	      if(x[j+1][0] == tmp2){
		if(x[j+2][1] == tmpNum){
		  if(x[j+2][0] == tmp3 && j<n-2){
		    if(x[j+3][1] == tmpNum){
		      if(x[j+3][0] == tmp4 && j<n-3){
			flag = 0;
		      }
			else flag = 1;
		    }
		  }
		  else flag = 1;
		}
	      }
	      else flag = 1;
	    }
	  }
	  else flag = 1;
	  break;
	}
      }
      tmp1 = 0;
      tmp2 = 0;
      tmp3 = 0;
      tmp4 = 0;   
    }
  }
  if(flag == 0) printf("Stable\n");
  else if(flag == 1) printf("Not stable\n");
}

