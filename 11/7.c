#include <stdio.h>
#include <string.h>

int main() 
{
    char str[500];
    char fs[33];
    char arr[33];
    int  bits[32];
    int  i, j;

    scanf("%s", str);

    for (i = 0; i < 32; i++) {
        arr[i] = 0;
    }

    j = strlen(str);
    for (i = 1; i <= j; i++) {
        arr[i % 32] += (int)str[i - 1];
    }

    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i + 1] = (char)(bits[i] % 85 + 34);
    }

    for (j = 1; j < 33; j++) {
        printf("%c", fs[j]);
    }

    return 0;
}
