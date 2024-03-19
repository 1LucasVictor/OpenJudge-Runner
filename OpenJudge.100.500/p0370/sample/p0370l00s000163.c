#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,i;
    char op;
    i=1;
    while(1){
    scanf("%d %c %d",&a,&op,&b);
    if(op == '?')break;
    if(op == '+'){
    printf("%d\n",a + b);
}else if(op == '-'){
    printf("%d\n",a - b);
}else if(op == '*'){
    printf("%d\n",a * b);
}else if(op == '/'){
    printf("%d\n",a / b);
}
    i++;}

return 0;
}
