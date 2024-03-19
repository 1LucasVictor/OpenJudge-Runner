#include <stdio.h>

int main(void)
{
    int x, s, i, r, p[6], m[]={500,100,50,10,5,1};

    scanf("%d",&x);

    for(i=0;i<6;i++)
      p[i]=0;

    for(i=0;i<6;i++){
    p[i] = x / m[i];
    r = x % m[i];
    x = r;
    }
  
    s = 0;
    s = p[0] * 1000 + p[5] * 5;
    
    printf("%d\n",s);
    return 0;
}
