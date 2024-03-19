#include<stdio.h>
#define MAX 100000
int n,k;
long long T[MAX];

int calculate(long long P) {
  int i=0;
  for(int j=0;j<k;j++) {
    long long s = 0;
    while(s + T[i] <=P) {
      s += T[i];
      i++;
      if(i==n)return n;
    }
  }
  return i;
}

int binary(void) {
long long left = 0,mid;
long long right = (long long)MAX*MAX;
while(right - left > 1) {
  mid = (left + right) / 2;
  int hantei = calculate(mid);
  if(hantei >= n) right = mid;
  else left = mid;
}
return right;
}

int main()  {
  scanf("%d%d",&n,&k);
  for(int i =0;i<n;i++) scanf("%lld", &T[i]);
 long long ans = binary();
  printf("%lld\n",ans);
  return 0;

}