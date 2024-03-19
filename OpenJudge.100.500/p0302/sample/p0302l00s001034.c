#include<stdio.h>
#include<string.h>

#define M 1000000
#define L 14
#define TRUE 1
#define FALSE 0

int H[M][L]; /* Hash Table */
int count=0;
int sum[M];
int len_i[M];

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}


int find(char str[]){
  int i,j,len,c=0,sum_f=0;
  len=strlen(str);
  for(i=0;i<count;i++){
    if(len==len_i[i]){
      for(j=0;j<len;j++){
	if(H[i][j]==getChar(str[j])) {
	  sum_f+=H[i][j];	
	}
	else break;
      }
      if(sum_f==sum[i]) return TRUE;
    }
  }
  return FALSE;

}

void insert(char str[]){
  int i;
  len_i[count]=strlen(str);
  for(i=0;i<len_i[count];i++){
    H[count][i]=getChar(str[i]);
    sum[count]+=H[count][i];
  }
  count++;
}

int main(){
    int i, n, h;
    char str[L], com[9];
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){
	    insert(str);
	} else {
	    if (find(str)==TRUE){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}