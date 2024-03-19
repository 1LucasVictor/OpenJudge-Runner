int main()
{
     int A,B,X;
     while(~scanf("%d%d%d",&A,&B,&X))
     {
        if(X>=A&&X<=A+B)

            printf("YES\n");
        else
            printf("NO\n");
     }
    return 0;
}