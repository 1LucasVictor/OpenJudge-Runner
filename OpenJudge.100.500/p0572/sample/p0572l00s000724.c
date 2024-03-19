#include <stdio.h>

int main(){
   int l,r,i;
    
   scanf("%d %d",&l,&r);
   i=l/2019;
   if (l==0 || l%2019==0 || r%2019==0 || r>=(i+1)*2019)
      puts("0");
   else
      printf("%d\n",((l%2019)*((l+1)%2019))%2019);
   return 0;
}
