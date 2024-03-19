#include <stdio.h>
#include <stdlib.h>

int main()
{
int L,R;
scanf("%d %d",&L,&R);
int i,j,s;
int m=2018;
for(i=L;i<R;i++){
  for(j=i+1;j<=R;j++){
    s=((i%2019)*(j%2019))%2019;
    if(s==0){
      printf("0\n");
      exit(0);
    }
    if(s<=m)m=s;
  }
}
printf("%d\n",m);
return 0;
}
