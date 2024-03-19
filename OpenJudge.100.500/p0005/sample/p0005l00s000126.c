#include <stdio.h>

int main (int ac, char **av) {
  char buf[21];
  char *p;
  while(fgets(buf,21,stdin) != NULL) {
    for(p=buf;*p!='\n'&&*p!='\0';p++);
    for(;p>buf;putchar(*--p));
  }
  putchar('\n');
  return 0;
}