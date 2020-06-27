#include <stdio.h>
#include <string.h>

int main() 
{
    char in[500];
    char out[33];
    int  k, i, j;
    char  arr[33];
    int  bits[32];
    
    scanf("%s", in);
    k = strlen(in);
    
    for (i = 0; i < 32; i++)
    {
        arr[i] = 0;
    }
    
    for (i = 1; i <= k; i++)
    {
        arr[i % 32] += (int)in[i -1];
    }
    
    for (j = 0; j < 32; j++){
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        out[j + 1] = (char)(bits[j] %85 + 34);
    }
    
    for (j = 1; j < 33; j++){
        printf("%c", out[j]);
    }
        
    return 0;
}
