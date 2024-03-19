#include<stdio.h>
main()
{
    int h;
    scanf("%d",&h);
    int i,n,a,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        s+=a;
    }
      if(s>=h){
        printf("Yes\n");
      }
      else{
        printf("No\n");
      }

    return 0;
}
