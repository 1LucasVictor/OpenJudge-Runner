#include<stdio.h>
#include<math.h>
int main()
{long long int a;
long long int b;
int i;
long long int n[1000];
while(scanf("%ld %ld", &a, &b)!=EOF)
{ 
i=0;
n[0]=a%b;
n[1]=b%n[0];
if(a%b==0)
{printf("%ld %ld\n",b,b);
}
if(b%n[0]==0)
{printf("%ld %ld\n",n[0], a*b/n[0]);
}
else
{
while(i<10)
{n[i+2]=n[i]%n[i+1];
if(n[i]%n[i+1]==0)
{printf("%ld %ld\n",n[i+1], a*b/n[i+1]);
break;
}
else
{i++;
}
}
} 
}
return 0;
}
