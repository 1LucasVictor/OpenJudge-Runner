#include <stdio.h>
#include <stdlib.h>

int main()
{
int L,R;
scanf("%d %d",&L,&R);
int i,s;
if(R-L>=2018){
  printf("0\n");
  exit(0);
}
if(R%2019 == 0){
  printf("0\n");
  exit(0);
}
int m=2018;
for(i=L;i<R;i++){
  s=i%2019;
  if(s<=m){
    m=s;
    }}
printf("%d\n",m*(m+1)%2019);
return 0;
}
