    #include<stdio.h>
    int main()
    {
       int a[3],count1=0,count=0;
       for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
        if(a[i]==5){
            count1++;
        }else if(a[i]==7){
        count++;
        }
       }
       if(count1==2&&count==1){
        printf("YES");
       }else {
       printf("NO");
       }

        return 0;
    }
