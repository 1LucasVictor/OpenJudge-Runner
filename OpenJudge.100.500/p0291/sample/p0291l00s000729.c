#include<stdio.h>

#define SIZE 200001
#define MIN -1000000000

int main(){
  int i,j;
  int max=MIN,min;
  int a[SIZE];

  while(scanf("%d",&a[i]) != EOF){
    i++;
  }
  /*  
  for(i=1;i<=a[0];i++){
    max=MIN;
    for(j=i+;j<=a[0];j++)
      if(max<a[j])
	max=a[j];
    if(max-a[i]>x)
      x=max-a[i];
  }
  */

  min=a[1];
  for(i=1;i<=a[0];i++){
    if(max<a[i]-min)
      max=a[i]-min;
    if(min>a[i])
      min=a[i];
  }
  printf("%d\n",max);

  return 0;
}
    