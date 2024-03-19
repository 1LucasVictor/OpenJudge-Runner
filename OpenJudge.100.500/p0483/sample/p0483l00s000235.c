#include <stdio.h>

int main(){
	int n;
  	int a[3]={0,0,0};
  	scanf("%d",&n);
  	
     a[0]=n/100;
     a[1]=(n-a[0]*100)/10;
     a[2]=n%10;

 	for(int i=0;i<3;i++){
      if(a[i]==7){
      printf("Yes\n");
        break;
      }
      if(i==2)printf("No\n");
    }

}