#include <stdio.h>

int result[50];

int i=0;
int a,b;
char op;
//int w,h,x,y,r;

int main(void) {
  while(scanf("%d %c %d",&a,&op,&b) && op!='?'){
  if(op=='+'){
    result[i]=a+b;
  }
  else if(op=='-'){
    result[i]=a-b;
  }
  else if(op=='*'){
    result[i]=a*b;
  }
  else if(op=='/'){
    result[i]=a/b;
  }
  i++;
}

for(int k=0;k<i;k++){
  printf("%d\n",result[k]);
}
	//return 0;

}

