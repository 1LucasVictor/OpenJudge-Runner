#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char buffer[256];
    char result[100][100];
    int count=0;
    unsigned int i, j;
    
    while(1)
    {
        int m, h;
        char deck[100];
        char shuffled[100];
        int length;
        int index;
        
        fgets(buffer, 256, stdin);
        sscanf(buffer, "%s", deck);
        int ret = strcmp(deck, "-");
        if(0==ret) break;
        //printf("debug %s %s\n", deck, "-");
        length=strlen(deck);
        
        fgets(buffer, 256, stdin);
        sscanf(buffer, "%d", &m);
        
        index=0;
        for(i=0;i<m;i++)
        {
            fgets(buffer, 256, stdin);
            sscanf(buffer, "%d", &h);
            index+=h;
        }
        index = index % length;
        strcpy(shuffled, deck);
        if(index!=0)
        {
            memcpy(shuffled, &deck[index], (length-index)*sizeof(char));
            
            //printf("%s\n", shuffled);
            memcpy(&shuffled[length-index], &deck[0], index*sizeof(char));
            //printf("%s\n", shuffled);
        }
        strcpy(result[count++], shuffled);
        
    }
    
    for(i=0;i<count;i++)
    {
        printf("%s\n", result[i]);
    }
    
    return(0);
}
