#include<stdio.h>
int main()
{
    int t,a,b,c,i,max,mid,min;
    scanf("%d",&t);
    if(t>=1&&t<=1000)
    {
        for(i=1;i<=t;i++)

       {

        scanf("%d %d %d",&a,&b,&c);
        {
            max=0;
            mid=0;
            min=0;
            if(a>b&&b>c)
               {

               max=a;
                min=c;
                mid=b;}
           else if(a>c&&c>b)
              {

               max=a;
                mid=c;
                min=b;}
            else if(b>a&&a>c)
               {

                max=b;
                min=c;
                mid=a;}
           else if(b>c&&c>a)
                {max=b;
                mid=c;
                min=a;}
            else if(c>a&&a>b)
                {max=c;
                mid=a;
                min=b;}
           else if(c>b&&b>a)
                {max=c;
                mid=b;
                min=a;}

        }

        if(max==0||mid==0||min==0)
        printf("NO\n");
        else if(max*max==mid*mid+min*min)
        printf("YES");
        else
        printf("NO\n");


       }

    }
}