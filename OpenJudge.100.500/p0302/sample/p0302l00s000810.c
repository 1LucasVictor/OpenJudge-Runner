#include <stdio.h>
#include <string.h>

#define M 1000000
#define L 14

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

/* convert a string into an integer value */
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return (key%M); }
int h2(int key){ return 1+(key%(M-1)); }//ここの 1+(key%(M-1) は、どんな計算でもよく、ここの計算結果分の距離ずつ進んで、空いている場所を探す。

int find(char str[]){
  long long Key,i,h;
  Key=getKey(str);
  for(i=0;;i++){
    h=(h1(Key)+i*h2(Key))%M;
    if(strcmp(H[h],str)==0){
      return 1;
    }
    else if(strlen(H[h])==0){
      return 0;
    }
  }
  return 0;
}

int insert(char str[]){
  long long Key,i,h;
  Key=getKey(str);
  for(i=0;;i++){
    h=(h1(Key)+i*h2(Key))%M;//ここの (h1(key)+i*h2(key))%M は、どんな計算でもよく、ここの計算結果分の距離ずつ進んで、空いている場所を探す。
    if(strcmp(H[h],str)==0){
      return 1;
    }
    else if(strlen(H[h])==0){//H[h]がまだ何も入ってない場所だった時
      strcpy(H[h],str);
      return 0;
    }
  }
}

int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    
  scanf("%d", &n);
    
  for ( i = 0; i < n; i++ ){
    scanf("%s %s", com, str);
	
    if ( com[0] == 'i' ){
      insert(str);
    } else {
      if (find(str)==1){
	printf("yes\n");
      } else {
	printf("no\n");
      }
    }
  }

  return 0;
}
/*
int getChar(char ch)
{
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

//convert a string into an integer value
long long getKey(char str[])
{
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return ; }
int h2(int key){ return ; }


char H[M][L];
int i=0;
int find(char str[]){
  int j;
  for(j=0;j<i;j++)
    {
      if(strcmp(H[j],str)==0)
	{
	  return 1;
	}
    }
  return 0;
}

int insert(char str[]){
  //static int i=0;
  strcpy(H[i],str);
  i++;
}

int main(){
  int i, n;
  char str[L], com[9];
  //for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    
  scanf("%d", &n);
    
  for ( i = 0; i < n; i++ ){
    scanf("%s %s", com, str);
	
    if ( com[0] == 'i' ){
      insert(str);
    } else {
      if (find(str)==1){
	printf("yes\n");
      } else {
	printf("no\n");
      }
    }
  }

  return 0;
}


*/

