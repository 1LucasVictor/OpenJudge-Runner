#include <stdio.h>
int main() {
    int h,j,k = 1;
    int ans;
    scanf("%d%d",&h,&j);
    for (ans = 0; k < j ;ans++) {
      k--;
      k = k + h;
    }
    printf("%d\n",ans);
    return 0;
}
