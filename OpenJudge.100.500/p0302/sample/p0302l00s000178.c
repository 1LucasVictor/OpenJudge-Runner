#include <stdio.h>
#include <string.h>
#define M 1046527
#define NIL (-1)
#define L 14
char H[M][L];
int getChar(char ch){
  if(ch=='A')
	return 1;
  else if(ch=='C')
	return 2;
  else if(ch=='G')
	return 3;
  else if(ch=='T')
	return 4;
  else 
	return 0;
}
long long getKey(char str[]){
  long long sum=0, p=1, i;
  for(i=0; i<strlen(str); ++i){
	sum+=p*(getChar(str[i]));
	p*=5;
  }
  return sum;
}
int h1(int key){
  return key % M;
}
int h2(int key){
  return (1+key%(M-1));
}
int find(char str[]){
  long long key, i, h;
  key=getKey(str);
  for(i=0; i<M; ++i){
	h=(h1(key)+i*h2(key))%M;
	if(strcmp(H[h], str)==0)
	  return 1;
	else if(strlen(H[h])==0)
	  return 0;
}
  return 0;
}
int insert(char str[]){
  long long key, i, h;
  key=getKey(str);
  for(i=0; i<M; ++i){
	h=(h1(key)+i*h2(key))%M;
	if(strcmp(H[h], str)==0)
	  return 1;
	else if(strlen(H[h])==0){
	  strcpy(H[h], str);
	  return 0;
	}
  }
  return 0;
}
int main(){
  int n;
  char line[50];
  int i;
  char *str_ptr;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &n);
  for(i=0; i<n; ++i){
	fgets(line, sizeof(line), stdin);
	str_ptr=strtok(line, " ");
	if(strcmp(line, "insert")==0){
	  str_ptr=strtok(NULL, " ");
	  //改行文字の消去
	  if(str_ptr[strlen(str_ptr)-1]=='\n')
		str_ptr[strlen(str_ptr)-1]='\0';
	  //	  insert;
	  insert(str_ptr);
	}
	else if(strcmp(line, "find")==0){
	  str_ptr=strtok(NULL, " ");
	  //改行文字の消去
	  if(str_ptr[strlen(str_ptr)-1]=='\n')
		str_ptr[strlen(str_ptr)-1]='\0';
	  // find;
	  if(find(str_ptr)==1)  
		printf("yes\n");
	  else if(find(str_ptr)==0)
		printf("no\n");
	  
	}
  }
  return 0;
}

