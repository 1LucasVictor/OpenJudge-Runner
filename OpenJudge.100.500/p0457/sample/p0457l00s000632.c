#include<stdio.h>
int main(void){
int n,m;
  long k;
  scanf("%d%d%ld",&n,&m,&k);
  long a[n],b[m];
  for(int i=0;i<n;i++){
	scanf("%ld",&a[i]);
  }
  for(int i=0;i<m;i++){
	scanf("%ld",&b[i]);
  }
  long time=0;
  int ac=0,bc=0,count=0;
  while(time<k&&ac+bc<n+m){
    if(a[ac]<=b[bc]){time+=a[ac];
      ac++;
      count++;            
                   // printf("a\n");
                    }
    else {time+=b[bc];
          bc++;
          count++;
         }
  }
  if(time>k)printf("%d",count-1);
  else printf("%d",count);
  
  return 0;
}