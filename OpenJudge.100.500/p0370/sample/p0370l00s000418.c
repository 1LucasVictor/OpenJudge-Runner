#include<stdio.h>
int main(){
  int a[20000];
  int b[20000];
  char op[20000];
  int i;
  int count=0;
  
  while(1){
    scanf("%d %c %d",&a[count],&op[count],&b[count]);
    if(op[count] == '?') break;
    count++;
  }

  for(i=0;i<count;i++){
    if(op[i] == '+'){
      printf("%d\n",a[i]+b[i]);
    }
    else if(op[i] == '-'){
      printf("%d\n",a[i]-b[i]);
    }
    else if(op[i] == '*'){
      printf("%d\n",a[i]*b[i]);
    }
    else printf("%d\n",a[i]/b[i]);
  }
  return 0;
}

