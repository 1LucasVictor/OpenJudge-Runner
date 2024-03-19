#include <stdio.h>
int main()
{
    int n, m, i=0, j=0, k, min=0, cnt=0;
    scanf("%d%d%d", &n, &m, &k);
    int a[n], b[m];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(j=0; j<m; j++)
        scanf("%d", &b[j]);
    i=0, j=0;
    while(min<=k) {
        if(a[i]<=b[j]) {
            min+=a[i];
            i++;
            cnt++;
        }
        else {
            min+=b[j];
            j++;
            cnt++;
        }

    }
    printf("%d", cnt-1);
  return 0;
}
