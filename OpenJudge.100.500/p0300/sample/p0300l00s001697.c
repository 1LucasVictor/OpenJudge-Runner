#include <stdio.h>
#define N 500


main(){
  int i, j, ns, nt, S[10000], T[N], c;

  scanf("%d", &ns);
  for(i = 0;i < ns;i++)scanf("%d", &S[i]);

  scanf("%d", &nt);
  for(i = 0;i < nt;i++)scanf("%d", &T[i]);

  for(i = 0,c = 0;i < ns;i++){
    for(j = 0;j < nt;j++){
      if(S[i] == T[j]) c++;
    }
  }
  printf("%d\n", c);
  return 0;
}