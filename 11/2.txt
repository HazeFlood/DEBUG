#include <stdio.h>

int main() 
{
    int  arr[33] = {0};
    int  bits[33];
    char input;
    char output[33];
    int  i;
	int  j;
    int  counter = 0;
    
    while (scanf("%c", &input) != EOF) {
    	if(input == '\n'){
           break;
        }
        counter++;
        arr[counter % 32] += (int)input;
    }
    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }
    for(int j = 0; j < 32; j++){
        output[j + 1] = (bits[j] % 85 + 34);
        printf("%c", output[j + 1]);
    }
    
    return 0;
}