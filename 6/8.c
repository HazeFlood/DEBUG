#include <stdio.h>
#include <string.h>

int main() 
{
	char before[3];
    char calculate[100][100];
    int  i = 0;
    int  count=0;
    int  result=0;
    
    scanf("%s", before);
    while (scanf("%s",calculate[i]) != EOF) {
        count++;
        i++;
    }
    for (i = 0; i < 3; i++) {
        if(before[i] == 'r') {
			result += 4;
		}
        if(before[i] == 'w')  {
			result += 2;
		}
        if(before[i] == 'x')  {
			result += 1;
		}
    }

    for (i = 0; i < count; i++) {
    	if (calculate[i][0] == '+') {
            if(calculate[i][1] == 'r') {
				result += 4;
			}
            if(calculate[i][1] == 'w') {
				result += 2;
			}
            if(calculate[i][1] == 'x'){
				result += 1;
			}
        } else if (calculate[i][0] == '-') {
            if(calculate[i][1] == 'r') {
				result -= 4;
			}
            if(calculate[i][1] == 'w') {
				result -= 2;
			}
            if(calculate[i][1] == 'x') {
				result -= 1;
			}
        }    
    }
    printf("%d", result);
    
    return 0;
}
