#include <stdio.h>
#include <string.h>

#define M 1000003

int getChar(char);
int getKey(char *);
int h1(int);
int h2(int);
void insert(char *);
void find(char *);

char H[M][13];

int main(){
  int i,j,n;
  char com[8],str[13];

  for(i=0;i<M;i++) H[i][0]='\0';

  scanf("%d",&n);

  for(i=0;i<n;i++){    
    scanf("%s%s",com,str);
    
    if(strcmp(com,"insert")==0) insert(str);
    else find(str);
  }
    
  return 0;
}

int getChar(char ch){
  if(ch=='A') return 1;
  else if(ch=='C') return 2;
  else if(ch=='G') return 3;
  else return 4;
}

int getKey(char *str){
  int i,sum=0,p=1;

  for(i=0;i<strlen(str);i++){
    sum+=p*(getChar(str[i]));
    p*=5;
  }
  return sum;
}

int h1(int key){
  return key%M;
}

int h2(int key){
  return 1+key%(M-1);
}

void insert(char *str){
  int i=0,key;
  
  while(1){
    key=h1(getKey(str))+i*h2(getKey(str))%M;
    if(H[key][0]=='\0'){
      strcpy(H[key],str);
      break;
    }
    else i++;
  }
}

void find(char *str){
  int i=0,key;

  while(1){
    key=h1(getKey(str))+i*h2(getKey(str))%M;
    if(strcmp(H[key],str)==0){
      printf("yes\n");
      break;
    }
    else if(H[key][0]=='\0'||i>=M){
      printf("no\n");
      break;
    }
    else i++;
  }
}