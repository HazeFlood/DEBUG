#include <stdio.h>
#include <string.h>

int main() 
{
    char string[4];
    int  current = 0;
    char reqrmt[3];
    int  req = 0;
    int  i;
    
    scanf("%s", string);
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'r') {
            current += 2 * 2;
        } else if (string[i] == 'w') {
            current += 2;
        } else if (string[i] == 'x') {
            current += 1;
        }
    }
    while (scanf("%s", reqrmt) != EOF) {
    	req = 0;
        for (i = 1; i < strlen(reqrmt); i++){
        	if (reqrmt[i] == 'r') {
                req += 2 * 2;
        	} else if (reqrmt[i] == 'w') {
                req += 2;
        	} else {
                req += 1;
        	}
		}
		if (reqrmt[0] == '+') {
            current = current | req;
        } else {
            current = current & (req);
        }
    }
    printf("%d\n", current);
    
    return 0;
}