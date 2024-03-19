#include<stdio.h>
#include<math.h>
int main(){


     for (int i = 1; ; i++)
     {
     char ch;
     int a,b;
     if(ch == '?') break;
     scanf("%d ",&a);   
     scanf(" %c", &ch);
     scanf(" %d",&b);
     if(ch == '+')printf("%d\n",a+b);
     if(ch == '-')printf("%d\n",a-b);
     if(ch == '*')printf("%d\n",a*b);
     if(ch == '/')printf("%d\n",a/b);
     }
        
    return 0;
}

