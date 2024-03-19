//
//  main.c
//  Minor Change
//
//  Created by k19031kk on 2020/06/27.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char sentence1[254];
    char sentence2[254];
    int count = 0;
    
    scanf("%s",sentence1);
    scanf("%s",sentence2);
    
    int len = (int) strlen(sentence1);
    
    for(int i=0;i<len;i++){
        
        if(sentence1[i] != sentence2[i]){
            count++;
        }
    }
    
    printf("%d\n",count);
    return 0;
}
