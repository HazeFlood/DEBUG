#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    
    scanf("%d", &n);
    getchar();
    
    char names[n][101];
    char max[101];
    
    for (int i = 0; i < n; i++) {
         int z = 0;
         while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
             z++;
         }
    }
    strcpy(max, names[0]);
    for (int i = 0; i < n - 1; i++) {
        if (strlen(names[i]) > strlen(max)) {
            strcpy(max, names[i]);
        }
    }
    printf("%s\n", max);
    
    return 0;
}
