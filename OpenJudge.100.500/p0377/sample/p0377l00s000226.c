int card[4][14];

int main (int argc,const char * argv[]){
    int n,i,j;
    char a;
    
    scanf("%d",&n);
    
    
    for(i = 0;i < n;i++){
        scanf(" %c %d",&a,&j);
        if(a == 'S')
            card[0][j] = 1;
        else if(a == 'H')
            card[1][j] = 1;
        else if(a == 'C')
            card[2][j] = 1;
        else
            card[3][j] = 1;
    }
    for(i = 0;i < 4;i++){
        if(i == 0)
            a = 'S';
        else if(i == 1)
            a = 'H';
        else if(i == 2)
            a = 'C';
        else
            a = 'D';
        
        for(j = 1;j <= 13;j++)
            if(card[i][j] == 0)
                printf("%c %d\n",a,j);
    }
    
    return 0;
}

