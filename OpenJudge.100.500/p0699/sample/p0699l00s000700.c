#include <stdio.h>
int main(){
    int a,b,c,count_five=0,count_seven=0;
    scanf("%d%d%d",&a,&b,&c);
     if(a==5)
       count_five++;
     if(b==5)
       count_five++;
     if(c==5)
       count_five++;
     if(a==7)
       count_seven++;
     if(b==7)
       count_seven++;
     if(c==7)
       count_seven++;
     if(count_five==2&&count_seven==1)
       printf("YES");
     else printf("NO");
       
    return 0;
}
