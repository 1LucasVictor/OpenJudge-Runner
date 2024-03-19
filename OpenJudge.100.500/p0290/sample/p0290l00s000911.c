#include<stdio.h>
#include<math.h>
int Prime(int);
int main(){
  int a,i,n,ju,count=0;
  scanf("%d",&n);
  if(n<0||n>10000)fprintf(stderr,"errer n\n");
  for(i=0;i<n;i++){
    scanf("%d",&a);
    ju=0;
    if(a==2)ju=1;
    else if(a%2!=0)ju=Prime(a);
    else continue;
    if(ju==1)count++;
  }
  printf("%d\n",count);
  return 0;
}


int Prime(int a){
  int i,ju=1;
  for(i=3;i<=sqrt(a);i++){
    if(a%i==0){
      ju=0;
      break;
    }
  }
  return ju;
}

