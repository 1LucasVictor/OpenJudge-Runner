#include<stdio.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
int s,d,m;
if(a==0&&b==0){
printf("0\n");
}
else{
s=a+b;
d=a-b;
m=a*b;
 if(s>d&&s>m){
printf("%d\n",s);
}
else if(d>s&&d>m){
printf("%d\n",d);
}
else if(m>s&&m>d){
printf("%d\n",m);
}
}

return 0;

}
