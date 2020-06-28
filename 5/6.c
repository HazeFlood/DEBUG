#include <stdio.h>
#include <string.h>

int main() 
{
    int  i, k;
    char n[11][21];
    char m[21];
    
    for (i = 0; i < 10; i++) {
        scanf("%s", n[i]);
    }
    /* might wrong */
    for (i = 0; i < 10; i++) {
        for (k = i + 1; k < 10; k++)
        {
            if (strcmp(n[i], n[k]) > 0) {
                strcpy(m, n[i]);
                strcpy(n[i], n[k]);
                strcpy(n[k], m);
            }
        }
        printf("%s\n", n[i]); 
    }
    
    return 0;
}
