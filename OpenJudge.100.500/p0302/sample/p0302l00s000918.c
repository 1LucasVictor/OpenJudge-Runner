#include <stdio.h>
#include <string.h>

char Hash[1000003][12];

int getChar(char string){
  if(string=='A')return 1;
  else if(string=='C')return 2;
  else if(string=='G')return 3;
  else if(string=='T')return 4;
  else return 0;
}

int h1(int key){
  return key%1000003;
}

int h2(int key){
  return (1+key%(1000003-1));
}

int generateKey(char str[]){
  int i,char_value=0,rate=1;
  for(i=0;i<strlen(str);i++){
    char_value+=rate*getChar(str[i]);
    rate*=5;
  }
  return char_value;
}

void insert(char str[]){
  int key,h_number,i=0;
  key=generateKey(str);
  while(1){
    h_number=(h1(key)+i*h2(key))%1000003;
    //元からあったとき
    if(strcmp(Hash[h_number],str)==0)break;
    //添字の部分に何もなかったとき(代入コピー操作)
    if(strlen(Hash[h_number])==0){
      strcpy(Hash[h_number],str);
      break;
    }
    i++;
  }
}

int find(char str[]){
  int key,h_number,i=0;
  key=generateKey(str);
  while(1){
    h_number=(h1(key)+i*h2(key))%1000003;
    if(strcmp(Hash[h_number],str)==0)return 1;//match
    else if(strlen(Hash[h_number])==0)break;
  }
  return 0;//Not match
}

int main(void){
  int i,n,key;
  char str[12],command[6];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s%s",command,str);
    if(command[0]=='i')insert(str);
    else{
      if(find(str)==1)printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

