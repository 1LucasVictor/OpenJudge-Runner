#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long a[200000];
  	for(int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }
  	for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
        if(a[i]==a[j]){
          printf("NO\n");
          goto end;
        }
      }
    }
  	printf("YES\n");
  	end: return 0;
}