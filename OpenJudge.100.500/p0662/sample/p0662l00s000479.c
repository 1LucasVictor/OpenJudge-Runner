#include<stdio.h>
int main (){
    int *m,n[4];

    for(m=n;m<n+4;m++)
        scanf("%d",m);
    m=n;
    if(n[1]<=n[2]||n[3]<=n[0])  printf("0\n");
        else if(n[0]>=n[2]&&n[1]<=n[3]) printf("%d\n",*(m+1)-*m);
            else if(n[0]<=n[2]&&n[1]>=n[3]) printf("%d\n",*(m+3)-*(m+2));
                else if(n[0]>=n[2]&&n[1]>=n[3]) printf("%d\n",*(m+3)-*m);
                    else  printf("%d\n",*(m+1)-*(m+2));
    return 0;
}
