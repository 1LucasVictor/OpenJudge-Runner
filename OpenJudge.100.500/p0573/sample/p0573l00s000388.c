#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,c,z,y;
    scanf("%c %c %c %c",&x,&c,&z,&y);
    if(x==c&&x!=z&&x!=y){
        printf("Yes");
    }else if(c==z&&c!=x&&c!=y)
    {
        printf("Yes");
    }else if(z==x&&z!=c&&z!=y)
    {
        printf("Yes");
    }else if(y==x&&y!=c&&y!=z)
    {
        printf("Yes");
    }else if(x==""&&z==""&&c==""){
      printf("No");
    }else if(y==""&&z==""&&c==""){
      printf("No");
    }else if(x==""&&y==""&&c==""){
      printf("No");
    }else if(x==""&&z==""&&y==""){
      printf("No");
    }
   return 0;
}
