#include <stdio.h>

int main(){
  long n, m, k;  scanf("%ld %ld %ld", &n, &m, &k);
  long a[200005], b[200005];
  for(int i=1; i<=n; i++)  scanf("%ld", a+i);
  for(int i=1; i<=m; i++)  scanf("%ld", b+i);
  a[n+1] = 1<<29, b[m+1] = 1<<29;
  long ans = 0, now = 0, alen = 1, blen = 1;
  while(now <= k){
    if(alen <= n && a[alen] < b[blen]){
      if(now + a[alen] <= k)  ans++;
      now = now + a[alen++];
    }else if(blen <= m && a[alen] > b[blen]){
      if(now + b[blen] <= k)  ans++;
      now = now + b[blen++];
    }else if(alen >= n && blen >= m){
      break;
    }else{
      long vis = 1, isA = 0;
      while(alen+vis<=n && blen+vis<=m){
	if(a[alen+vis] < b[blen+vis]){
	  isA = 1;
	  break;
	}else if(a[alen+vis] > b[blen+vis]){
	  break;
	}else{
	  vis++;
	}
      }
      if(isA == 1){
	if(now + a[alen] <= k)  ans++;
	now = now + a[alen++];
      }else{
	if(now + b[blen] <= k)  ans++;
	now = now + b[blen++];
      }
    }
  }

  printf("%ld\n", ans);
  return 0;
}
  



  
