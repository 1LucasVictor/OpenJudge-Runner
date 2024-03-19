#include <stdio.h>

int num[10000];
int i=0;
int a,b;
int max = -1000001;
long long int sum=0;
int min = 1000001;


//int w,h,x,y,r;

int maxi(){
  for(int i=0;i<a;i++){
    if(num[i]>=max){
    max=num[i];
  }
  else;
}
}
int mini(){
  for(int i=0;i<a;i++){
    if(num[i]<=min){
    min=num[i];
  }
  else;
}
}
int avg(){
  for(int i=0;i<a;i++){
    sum += (long long int)num[i];
  }
}

int main(void) {
  scanf("%d",&a);
  for(int i=0;i<a;i++){
    scanf("%d",&b);
    num[i]=b;
}
maxi();
mini();
avg();

  printf("%d %d %d\n",min,max,sum);
  //printf("%d\n",num[k]);

	//return 0;

}

