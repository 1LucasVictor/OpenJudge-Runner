#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,k;
    
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  
    if((b-a>k)||(c-a>k)||(d-a>k)||(e-a>k))  printf(":(\n");
    else if((c-b>k)||(d-b>k)||(e-b>k))  printf(":(\n");
    else if((d-c>k)||(e-c>k))  printf(":(\n");
    else if(e-d>k)  printf(":(\n");
    else printf("Yay!\n");
  
    return 0;
}
