#include <stdio.h>


int main(){
char op;
int a,b;

while(1){
scanf("%d %c %d",&a,&op,&b);

if (op == '+'){
 printf("%d\n",a+b);
}

if (op == '-'){
 printf("%d\n",a-b);
}

if (op == '*'){
printf("%d\n",a*b);
}

if (op == '/'){
 printf("%d\n",a/b);
}

if (op =='?'){
 break;
}

}
return 0;

}