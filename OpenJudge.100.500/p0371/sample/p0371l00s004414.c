#include <stdio.h>

int main()
{

int a[10000], min, max, n, i;
long long sum = 0;
scanf("%d", &n);//1以上が入力されるものとします
for(i = 0; i < n; i++){
scanf("%d", &a[i]);
sum += a[i];
}
max = min = a[0];//とりあえず最初の要素をセットしておく
for(i = 1; i < n; i++){//2番目以降の要素と比較
if(a[i] > max)max = a[i];
if(a[i] < min)min = a[i];
}
printf("%d %d %lld\n", min, max, sum);

return 0;
}
