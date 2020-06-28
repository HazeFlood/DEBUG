#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[33];
    char str[500];
    char result[33];
    int  j, i;
    int  bits[32];

    scanf("%s", str);
    for (i = 0; i <= 32; i++) {
        arr[i] = 0;
    }
    j = strlen(str);
    for (i = 1; i <=j; i++) {
        arr[i % 32] += (int)str[i - 1];
    }
    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        result[j + 1] = (char)(bits[j] % 85 + 34);
    }
    for (j = 1; j < 33; j++) {
        printf("%c", result[j]);
    }

    return 0;
}
