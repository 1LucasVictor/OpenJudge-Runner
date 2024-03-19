#include <stdio.h>
int main(void)
{
  int a,n;
  int i,j;
  int b;
  int cnt=0;
  int l=0,o=0;
  int combi[1000][4]={0};
  int ans[10000]={0};
  int m,k,h;
  int temp;

  while(1) {
    cnt=0;
    o=0;
    scanf("%d",&n);
    scanf("%d",&a);
    if (n==0 && a==0) break;
    for (i=1; i<=n; i++) {
      b=a-i;
      if (b<2*i) break;
      else {
        for (j=1; j<b/2; j++) {
          if (i!=j && i!=b-j && b-j<=n && j<=n && b-j!=j ) {
            cnt++;
            combi[o][0]=i;
            combi[o][1]=b-j;
            combi[o][2]=j;
            o++;
          }
        }        
      }
    }
    ans[l]=cnt;
    for (m=0; m<o; m++) {
      for (k=0; k<cnt-1; k++) {
        for (h=k+1; h<cnt; h++) {
          if (combi[m][k]>combi[m][h]) {
            temp=combi[m][k];
            combi[m][k]=combi[m][h];
            combi[m][h]=temp;
          }
        }
      }
    }
    for (i=0; i<cnt-1; i++) {
      if (combi[i][0]==combi[i+1][0] && combi[i][1]==combi[i+1][1] && combi[i][2]==combi[i+1][2]) {
        ans[l]--;
      }
    }
    l++;
  }

  for (i=0; i<l; i++) {
    printf("%d\n",ans[i]);
  }
  return 0;
}