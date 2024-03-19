#include<stdio.h>
#include<string.h>

typedef struct{
  char inst[7];
  char str[13];
}instruct;


char dictionary[1001][12];
int num=0;

void addDictionary(char*);
int searchDictionary(char*);

int main(){
  instruct num[10000];
  int i,n;
  int comp;
  char word[13];
  

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s%s",num[i].inst,num[i].str);

  }

  for(i=0;i<n;i++){
    
    strcpy(word,num[i].inst);
    comp=strcmp("insert",word);
      if(comp==0){
      addDictionary(num[i].str);
    }
    if(comp!=0){
      if(searchDictionary(num[i].str)==1){
	printf("yes\n");
      }
      if(searchDictionary(num[i].str)!=1){
	printf("no\n");
      }
    }

  }
    return 0;
}

void addDictionary(char* word){
  strcpy(dictionary[num],word);
  num++;
}

int searchDictionary(char* word){
  int i=0;
  while(num>i){
    if(strcmp(word,dictionary[i])==0){
      return 1;
    }
    i++;
  }

  return 0;
}