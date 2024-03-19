 #include <stdio.h>
 int main(int argc, char *argv[])
 {
    char a[5],t;
    int i,j;
    scanf("%s",&a);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    if(a[0]==a[1]&&a[2]==a[3]) printf("Yes\n");
    else printf("No\n");
    return 0;
 }
 