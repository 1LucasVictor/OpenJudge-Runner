int main(void)
{
    int n,i,j;
    scanf("%d",&n);
     
    for(i = 3;i <= n;i++){
        j = i;
        if(i % 3 == 0)printf(" %d",i);
        else       
        while(j > 0){
            if(j % 10 == 3){
                printf(" %d",i);
                break;
            }
            j /= 10;
        }   
    }
             
    printf("\n");
    return 0;
}
