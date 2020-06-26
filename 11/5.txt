#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[32];
    char str[32];
    int  bits[32];
    char result[32];
    char input;
    int  j = 0;
    
    scanf("%s", &str);
    for(int i = 0; i < 32; i++){
        arr[i] = 0;
    }
    
    for (int i = 0; i < strlen(str); i++) {
        arr[(i+1) % 32] = arr[(i+1) % 32] + (int)(str[i]);
    }
    
    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    
    for (int i = 0; i < 32; i++) {
        printf("%c",result[i]);
    }
    
    return 0;
}