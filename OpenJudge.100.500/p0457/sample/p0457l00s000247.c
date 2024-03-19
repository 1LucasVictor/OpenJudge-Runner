#include<stdio.h>
int main(void){
  int n,m,k;
  scanf("%d%d%d",&n,&m,&k);
  int a[n],b[m];
  long sum=0;
  for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
    sum+=a[i];
  }
   for(int i=0;i<m;i++){
	scanf("%d",&b[i]);
  }
  int max=0,c=0;
  for(int i=0;i<n;i++){
	if(sum>k){sum-=a[n-i-1];
      continue;
             }
		while(sum<=k){
          sum+=b[c];
          if(sum>k){sum-=b[c];
                    break;}
          else c++;
          if(c==m){
            printf("%d",c+n-i);
            return 0;
          }
        }
    if(c+n-i>max)max=c+n-i;
  }
  printf("%d",max);
  return 0;
}