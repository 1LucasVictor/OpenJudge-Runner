#include <stdio.h>
#include <string.h>

int find_s(long *str, long key, long n) {
  long j=0;
  str[n]=key;
  while (str[j]!=key) j++;
  if(j<n) return 1;
  return 0;
}
long encode(const char *key){
  int n=strlen(key),i;
  long sum=0;
  long keta=1;
  for(i=0;i<n;i++){
    if (key[i]=='A')      sum = sum + keta * 1;
    else if (key[i]=='C') sum = sum + keta * 2;
    else if (key[i]=='G') sum = sum + keta * 3;
    else if (key[i]=='T') sum = sum + keta * 4;
    keta=keta*5;
  }
  return (sum);
}
int main(void) {
  long n,i,s=0;
  scanf("%ld\n",&n);
  long str[1000001];
  for(i=0;i<n;i++){
    char cmd[8], word[13]; scanf("%s ",cmd); scanf("%s\n",word);
    if(cmd[0]=='i') {
      str[s]=encode(word); s++;
    }
    else {
      if(find_s(str,encode(word),n)) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}