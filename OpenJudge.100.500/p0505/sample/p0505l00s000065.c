#include <stdio.h>
int main()
{int H,N,j,i,a,flag=0;
    scanf("%d",&H);
    scanf("%d",&N);
    int ;
    for (i=0;i<N;i++)
    {scanf("%d",&a);
    H=H-a;
        if(H<=0)
        {flag=1;
    }
    }
    if (flag==1)
    {printf("Yes");
    }
    else
    {printf("No");
    }
    return 0;
}
