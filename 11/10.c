#include <stdio.h>
#include<string.h>

const int maxn = 10010;

int main() 
{
    int  i, j, k;
    int  arr[32] = {0};
    int  bits[32];
    char str[maxn], rstr[maxn];

    i = 0;

    scanf("%s", str);

    k = strlen(str);

    for (i = 0; i <= k; i++) {
        arr[i % 32] += (int)str[i - 1];
    }
    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        rstr[j + 1] = (char)(bits[j] % 85 + 34);
    }
    for (i = 0; i <= 32; i++) {
        printf("%c", rstr[i]);
    }
    return 0;
}
