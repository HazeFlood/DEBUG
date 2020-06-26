#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char pms[3];
    char change_pms[100][2];
    int i;
    i = 0;
    int j;
    int a;/* The original permission value of the file */ 
    a = 0;
    int b;
    b = 0;
    int c;
    c = 0;
    
    /* Enter the current file permissions */ 
    scanf("%s", pms);
 
    /* Enter file permissions to add or delete */ 
    while (scanf("%s", change_pms[i++]) != EOF) {
        scanf("%s", change_pms[i++]); 
    }
    /* Determines the permissions of the original file, expressed in decimal */ 
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        } 
    }
    
    for (i = 0; i < strlen(change_pms[i]); i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') 
           {
               b += 4;   
            } else if (change_pms[i][j + 1] == 'w') 
           {
                b += 2;
            } else 
           {
                b += 1;
            }
        } else {
            if (change_pms[i][j + 1] == 'r') 
           {
               b -= 4;   
            } else if (change_pms[i][j + 1] == 'w') 
           {
                b -= 2;
            } else 
           {
                b -= 1;
            }
        }
    }
    printf("%d", a + b);
    
    return 0;
}