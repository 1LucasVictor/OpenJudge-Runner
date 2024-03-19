#include<math.h>
int main()
{
  int a,b,c;
  char op;

  while(1){
  scanf("%d %c %d",&a,&op,&b);

  if(op == '?')
    break;
  else if(op == '+')
    printf("%d\n",c = a + b);
  else if(op == '-')
    printf("%d\n",c = a - b);
  else if(op == '/')
    printf("%d\n",c = a / b);
   else if(op == '*')
    printf("%d\n",c = a * b);
}

return 0;
}
