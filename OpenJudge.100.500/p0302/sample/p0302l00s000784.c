#include <stdio.h>
#include <string.h>

char dict[30600000];

long encode(const char *key){
  int n=strlen(key),i;
  long sum=0;
  long keta=1;
  for(i=0;i<n;i++){
    if (key[i]=='A')      sum = sum + keta;
    else if (key[i]=='C') sum = sum +  (keta << 1);
    else if (key[i]=='G') sum = sum + ((keta << 1) | keta);
    else if (key[i]=='T') sum = sum +  (keta << 2);
    keta=keta*5;
  }
  return (sum);
}

void insert(const char *key2) {
  long key=encode(key2);
  long keta=key/8;
  dict[keta]=(dict[keta]|(1<<(key%8)));
}

int find_h(const char *key2) {
  long key=encode(key2);
  return (dict[key/8] & 1<<(key%8));
}

int main(void) {
  long n,i;
  scanf("%ld\n",&n);
  for(i=0;i<n;i++){
    char cmd[8], str[14]; scanf("%s %s\n",cmd, str);
    if(cmd[0]=='i') {
      insert(str);
    }
    else {
      if(find_h(str)) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}