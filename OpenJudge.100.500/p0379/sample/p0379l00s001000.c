#include <stdio.h>
#include <string.h>
int main(){
  char line[1000000];
  int n,m;

  /*  */
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &n, &m);
  int A[n][m];
  int b[m];
  int i, j;
  char *str_ptr;
  int tmp=0;
  //配列Aへの格納
  for(i=0; i<n; ++i){
	fgets(line, sizeof(line), stdin);
	str_ptr=strtok(line, " ");
	sscanf(str_ptr, "%d", &A[i][0]);
	for(j=1; j<m; ++j){
	  if(str_ptr==NULL)
		break;
	  str_ptr=strtok(NULL, " ");
	  sscanf(str_ptr, "%d", &A[i][j]);
	}
  }
  /* ベクトルbの読み込み */
  for(j=0; j<m; ++j){
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &b[j]);
  }
  
  for(i=0; i<n; ++i){
	for(j=0; j<m; ++j){
	  tmp+=A[i][j]*b[j];
	}
	printf("%d\n", tmp);
	tmp=0;
  }

  return 0;
}

