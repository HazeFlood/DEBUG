#include <stdio.h>
#include <string.h>
 
void swap(char *a,char *b) 
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
	int  i;
    int  j;
    int  k;
    int  length;
    char name[10][21];
    char temp;
    int  m;
    
    for (i = 0;i < 10;i++) {
        scanf("%s",name[i]);
    }
    for (j = 0;j < 10;j++) {
        for (k = 0;k < 9 - j;k++) {
            if (strcmp(name[k],name[k + 1]) > 0) {
                for (length = 0;length < 20;length++) {  
                	swap(&name[k][length],&name[k + 1][length]);   
                }
            }
        }
    }
    for (m = 0;m < 10;m++) {
        printf("%s ",name[m]);
        if (m != 9) {
            printf(" \n");
        }
    } 
    
    return 0;
}
