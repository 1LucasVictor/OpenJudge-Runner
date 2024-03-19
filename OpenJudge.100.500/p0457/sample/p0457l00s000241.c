#include<stdio.h>
#define N 200000
int main(void)
{
  int n, m, k, i, j, total, count, tmp;

  scanf("%d %d %d", &n, &m, &k);
  int a[n], b[m];

  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }

  for(i=0;i<m;i++){
    scanf("%d", &b[i]);
  }

  total = n;
  for (i=0; i<total; ++i) {
    for (j=i+1; j<total; ++j) {
      if (a[i] > a[j]) {
        tmp =  a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  total = m;
  for (i=0; i<total; ++i) {
    for (j=i+1; j<total; ++j) {
      if (b[i] > b[j]) {
        tmp =  b[i];
        b[i] = b[j];
        b[j] = tmp;
      }
    }
  }
	i=0, j=0, count=0;
	int flag=1;
  while(flag){
    if(a[i] < b[j] && i<n){
				if(count+a[i] <= k){
		    count += a[i];
		    i++;
				}else{
					flag=0;
				}	
    }else{
				if(count+b[j] <= k){
	      count += b[j];
	      j++;
				}else{
					flag=0;
				}
    }
  }

  printf("%d\n", i+j);

  return 0;
}