#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    
    scanf("%d", &n);
    
    char name[100][101];
    char largest[101];
    int  i, j;
        
    while (scanf("%c", &name[i][j]) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < 101; j++) {
                scanf("%c", &name[i][j]);
                if (name[i][j] == '\n') {
                	name[i][j] = '\0';
                    break;
                }            
            }
        }
    }
	
    for (strcpy(largest, name[0]), i = 1; i < n; i++) {
        if (strlen(largest) < strlen(name[i])) {
		    strcpy(largest, name[i]);
		}
	}
	
    printf("%s", largest);
    
    return 0;
}