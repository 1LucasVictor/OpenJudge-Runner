/* Search III */
#include<stdio.h>
#include<string.h>

#define M 1000003
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

int h1(int key){ return key%M; }
int h2(int key){ return 1+key%(M-1); }

int find(char str[]){
  int key,i,h_1,h_2;
  key=getKey(str);
  h_1=h1(key);
  //printf("h_1:%d\n",h_1);
  if(strcmp(H[h_1],str)==0){
    return 1;  /*true*/
  }else{
    h_2=h2(key);
    //printf("h_2:%d\n",h_2);
    for(i=h_1;;i+=h_2){
      //printf("key:%d\n",key);
      //printf("i:%d\n",i);
      if(strcmp(H[i],str)==0)return 1; /*true*/
      else if(H[i][0]=='\0')return 0; /*false*/
      if((M-i)<=h_2){
	i=h_2-(M-i);
	//	printf("i:%d",i);
      }
    }
  }
}

int insert(char str[]){
  int key, h_1, h_2, h, i;
  key=getKey(str);
  h_1=h1(key);
  if(H[h_1][0]=='\0'){
    strcpy(H[h_1],str);
  }else{
    h_2=h2(key);
    for(i=0;;i++){
      h=(h_1+i*h_2)%M;
      if(H[h][0]=='\0')break;
      }
    strcpy(H[h],str);
  }
  return 0;
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
      if (find(str)){
	printf("yes\n");
      } else {
	printf("no\n");
      }
    }
  }
  return 0;
}