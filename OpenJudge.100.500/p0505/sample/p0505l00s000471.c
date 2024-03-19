    #include <stdio.h>
    #include <string.h>

    int main(void)
    {
        int n,h;
        scanf("%d %d",&h,&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            h=h-a[i];
            //printf("%d\n",h);
        }
        if(h <= 0){printf("Yes\n");}
        else{printf("No\n");}
        return 0;
    }