int main()
{
     int a,b,x,y,z;
     while(~scanf("%d%d",&a,&b))
     {

       x=a+b;
       y=a*b;
       z=a-b;
       if(x>=y&&x>=z)
        printf("%d\n",x);
       if(y>x&&y>z)
        printf("%d\n",y);
       if(z>x&&z>y)
        printf("%d\n",z);


     }
    return 0;
}