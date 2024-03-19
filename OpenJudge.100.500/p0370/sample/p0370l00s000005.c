#include  <stdio.h>
int main(void) {

int a;
char b;
int c;
int d;

while (1) {d=0;
 scanf ("%d %c %d",&a,&b,&c);
 if (b=='+'){
    d=a+c;
    printf ("%d\n",d);
 }
 if (b=='-'){
    d=a-c;
    printf ("%d\n",d);
    }
 if (b=='*'){
    d=a*c;
    printf ("%d\n",d);
 }
 if (b=='/'){
    d=a/c;
    printf ("%d\n",d);
 }
 if (b=='?') break ;              }

 return 0;

}