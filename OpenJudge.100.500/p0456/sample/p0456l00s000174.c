#include <stdio.h>

int main()
{char a[32],b[32];int i,c=0;
scanf("%s",a);
scanf("%s",b);
for(i=0;i<32;i++){
    if(a[i]==0){break;}
    if(a[i]!=b[i]) {c++;}
}
printf("%d",c);
    return 0;
}