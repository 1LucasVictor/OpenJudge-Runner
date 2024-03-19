#include <stdio.h>
int main()
{int H,N,j,i,a,flag=0;
    scanf("%d",&H);
    scanf("%d",&N);
    int arr[N];
    for (i=0; i<N; i++)
    {scanf("%d",&arr[i]);
    }
    for (i = 0; i < N; ++i)
    {for (j = i + 1; j < N; ++j)
        {if (arr[i] < arr[j])
            {a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (i=0; i<N; i++)
    {H=H-arr[i];
        if (H<=0)
        {flag=1;
            break;
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
