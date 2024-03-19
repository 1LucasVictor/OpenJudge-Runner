#include<stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&i);
  	j=i/500;
  	k=(i-j*500)/5;
  	printf("%d\n",j*1000+k*5);
}

