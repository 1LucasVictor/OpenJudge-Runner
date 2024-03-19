#include <stdio.h>
int main(void){
  int i;
  int a[1000],b[1000];
  char op[1000];

  while(1){
    scanf("%d %c %d\n",&a[i],&op[i],&b[i]);
        if(op[i]=='?'){
          break;
        }
    i++;
  }

  for(int j;j<i;j++){
    if(op[j]=='+'){
      printf("%d\n",a[j]+b[j]);
    }else if(op[j]=='-'){
      printf("%d\n",a[j]-b[j]);
    }else if(op[j]=='*'){
      printf("%d\n",a[j]*b[j]);
    }else if(op[j]=='/'){
      printf("%d\n",a[j]/b[j]);
    }
  }
  return 0;
}
