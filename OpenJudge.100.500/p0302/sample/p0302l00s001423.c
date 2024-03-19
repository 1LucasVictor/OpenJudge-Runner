
#include <stdio.h>
#include <string.h>

int n;
char data[16777220];
char sizeD[16777220];

int conv(char c){
  switch(c){
  case 'A':
    return 1;
    break;
  case 'C':
    return 2;
    break;
  case 'G':
    return 3;
    break;
  case 'T':
    return 4;
    break;
  }
}

int hash(char str[10]){
  int res = 0, size = strlen(str), r = 1, i;
  for(i=size-1;i>=0;i--){
    res += r * (conv(str[i])-1);
    r *= 4;
  }
  return res;
}

void insertElm(int d, int len){
  data[d] = 1;
  sizeD[d] = len;
}

char findElm(int d, int len){
  if(sizeD[d] == len) return data[d];
  else 0;
}

main(){
  char ope[10], str[10];
  int i;
  //memset(data, 0, N);
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s", ope);
    scanf("%s", str);
    if(!strcmp(ope, "insert")) insertElm(hash(str), strlen(str));
    else printf("%s\n", (findElm(hash(str), strlen(str)) ? "yes" : "no"));
  }
  return 0;
}