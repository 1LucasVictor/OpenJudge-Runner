#include <stdio.h>
    int max(int A, int B)
{
     if (A+B>A*B&&A+B>A-B)
              return A+B;
    else if(A-B>A+B&&A-B>A*B)
              return A-B;
  else if(A*B>A+B&&A*B>A-B)
            return A*B;
}

int main(void)
{ int num1, num2, ans;
scanf("%d", &num1);
scanf("%d", &num2);
ans=max(num1, num2);
printf("%d\n",ans);
return 0;
}