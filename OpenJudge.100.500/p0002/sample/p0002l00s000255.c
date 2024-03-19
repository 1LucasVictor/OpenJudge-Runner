
#include <stdio.h>

int main(void) {

  int i,j;
  int n;

  scanf("%d",&n);

  int t[n][4];

  for(i=0;i< n;i++)
    scanf("%d %d %d",&t[i][0],&t[i][1],&t[i][2]);

  for(i=0;i< n;i++) {
    for(j=1;j< 3;j++) {
      if(t[i][0]< t[i][j]) {
	t[i][3]=t[i][0];
	t[i][0]=t[i][j];
	t[i][j]=t[i][3];
      }
    }
    if(t[i][0]*t[i][0]==t[i][1]*t[i][1]+t[i][2]*t[i][2])
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;

}