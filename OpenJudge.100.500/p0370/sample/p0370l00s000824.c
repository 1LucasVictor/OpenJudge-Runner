#include <stdio.h>
int main(){
    int a,b;
    char x;
while(1){
    scanf("%d %c %d",&a,&x,&b);
    if(x=='?'){
      break;
    }
    else if(x=='+'){
        printf("%d\n",a+b);
    }
    else if(x=='-'){
        printf("%d\n",a-b);
    }
    else if(x=='*'){
        printf("%d\n",a*b);
    }
    else if(x=='/'){
        printf("%d\n",a/b);
    }
}
return 0;
}