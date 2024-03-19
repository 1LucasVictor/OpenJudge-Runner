#include <stdio.h>
int main(void) {
  int N, A, B, C, D, a, p, q, i;
  p=1; q=0;
  char str[200005];
  scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
  scanf("%s", str);
  if (C<D) {
    a=0;
    for (i=B-1; i<=D-1; i++) {
      if (str[i] == '#') a++;
      else a=0;
      if(a>=2) {
        p=0;
        break;
      }
    }
    a=0;
    for (i=A-1; i<=C-1; i++) {
      if (str[i] == '#') a++;
      else a=0;
      if(a>=2 || p==0) {
        p=0;
        break;
      }
    }
  }
  else {
    a=0;
    for (i=B-1; i<=D-1; i++) {
      if (str[i] == '.') a++;
      else a=0;
      if(a>=3) {
        break;
      }
    }
    if (a<=2) {
        p=0;
    }
    a=0;
    for (i=B-1; i<=D-1; i++) {
      if (str[i] == '#') a++;
      else a=0;
      if(a>=2 || p==0) {
        p=0;
        break;
      }
    }
    a=0;
    for (i=A-1; i<=C-1; i++) {
      if (str[i] == '#') a++;
      else a=0;
      if(a>=2 || p==0) {
        p=0;
        break;
      }
    }
  }
  if (C>D) {
      str[B-1]='#';
      q=1;
      a=0;
    for (i=B-1; i<=D-1; i++) {
      if (str[i] == '#') a++;
      else a=0;
      if(a>=2) {
        q=0;
        break;
      }
    }
    a=0;
    for (i=A-1; i<=C-1; i++) {
      if (str[i] == '#') a++;
      else a=0;
      if(a>=2 || q==0) {
        q=0;
        break;
      }
    }
  }
  if (q==1) p=1;
  if (p==1) printf("Yes");
  else printf("No");
  return 0;
}
