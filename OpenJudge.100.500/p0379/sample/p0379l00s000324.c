int main(void){
    int x,y;
    int InX,InY;
    int sum=0;
    int a[1001][1001],b[1001];
    
    
    scanf("%d %d",&InX,&InY);
    
    for(x=0;x<InX;x++){
        for(y=0;y<InY;y++){
            scanf("%d",&a[x][y]);
        }
    }
    for(x=0;x<InY;x++){
        scanf("%d",&b[x]);
    }
    
    for(x=0;x<InX;x++){
        for(y=0;y<InY;y++){
            sum = sum + a[x][y]*b[y];
        }
        printf("%d\n",sum);
        sum=0;
    }
}
