#include <stdio.h>

int main()
{
 int N=0;
 char S[100005];
 int i;
 int zeros=0;
 int ones=0;
 int out;

 scanf("%s",&S);
 for(i=0;i<100005;i++)
 {
  if(S[i]=='0') 
  {
   zeros++;
   N++;
  }else if(S[i]=='1')
  {
   ones++;
   N++;
  }else{
   break;
  }
 }
 out=ones;
 if(ones>zeros) out=zeros;
 out=out*2;
 printf("%d\n",out);
 return 0;
}
