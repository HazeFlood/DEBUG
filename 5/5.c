#include <stdio.h>
#include <string.h>

void swap (char *b, char *c);

int main() 
{
    char name[10][21];
    int  i;
    int  j;
    int  length;
    int  m = 10;
    
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m -1 - j; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){
                for (length = 0; length < 20; length++) {  
                	swap(&name[i][length], &name[i + 1][length]);   
                }    
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s", name[i]);
		if (i != 9) {
            printf("\n");
        }     
    }
    
    return 0;
}

void swap (char *b, char *c) 
{
    char temp;
    temp = *b;
    *b = *c;
    *c = temp;
}
