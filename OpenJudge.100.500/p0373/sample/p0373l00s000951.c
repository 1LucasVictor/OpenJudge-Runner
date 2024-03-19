int main(void)
{
    int H=1, W=1, i, j;

    

    while ((H != 0) && (W != 0))
    {
        scanf("%d %d", &H, &W);

        if ((H == 0) && (W == 0))
        {
            return 0;
        }
        else
        {
            for (j = 0;j < H;j++)
            {
                for (i = 0;i < W;i++)
                {
                    if ((i !=0 ) && (j != 0)&&(i!=W-1)&&(j!=H-1))
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("#");
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
