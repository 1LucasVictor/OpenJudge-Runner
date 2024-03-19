#include<stdio.h>
#include<string.h>

int main(void){
  int i, j, n, len;
  char f[200]={}, p[200], q[200], r[200];
  char *ptrf=f, *ptrp=p;

  while(1){
    scanf("%s", f);
    if(strcmp(f, "-") == 0) break;
    len = strlen(f);
    f[len] = '\0';
    scanf("%d", &len);
    for(i=0;i<len;i++){
      scanf("%d", &n);
      for(j=0;j<n;j++) *ptrp++ = *ptrf++;
      *ptrp = '\0';
      strcpy(q,ptrf);
      strcpy(r, q);
      strcat(q, p);
      strcpy(f, q);
      strcpy(q, r);
      ptrf=f;
      ptrp=p;
    }
    printf("%s\n", f);
  }
  return 0;
}

