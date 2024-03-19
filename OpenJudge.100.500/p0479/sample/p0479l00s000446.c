#include<stdio.h>
/*int main()
{
  int N;
  int A[200010], result[200010];
  int sum=0;
  scanf("%d",&N);
  for(int i=2;i<=N;i++){
    scanf("%d",&A[i]);
    result[A[i]]++;
  }
  for(int i=1;i<=N;i++){
    printf("%d\n",result[i]);
  }
}*/

int a[200010];
int ans[200010];
int main(){
int n;
scanf("%d",&n);
for(int i=2;i<=n;i++) scanf("%d",&a[i]);
for(int i=2;i<=n;i++) ans[a[i]]++;
for(int i=1;i<=n;i++) printf("%d\n",ans[i]);
}