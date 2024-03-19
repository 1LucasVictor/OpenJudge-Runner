#include <stdio.h>
#include <string.h>
 
const int N = 16777217;
 
int n;
char data[16777217];
 
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
    res += r * conv(str[i]);
    r *= 4;
  }
  return res;
}
 
void insertElm(int d){
  data[d] = 1;
}
 
char findElm(int d){
  return data[d];
}
 
main(){
  char ope[13], str[13];
  int i;
  memset(data, 0, 16777217);
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s", ope);
    scanf("%s", str);
    if(!strcmp(ope, "insert")) insertElm(hash(str));
    else printf("%s\n", (findElm(hash(str)) ? "yes" : "no"));
  }
  return 0;
}

