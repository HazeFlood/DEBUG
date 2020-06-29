#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m, n, i, j, count = 0;
    int startX, startY, endX, endY;
   
    startX = 0;
    startY = 0;

    scanf("%d %d", &m, &n);
    
    endX  = m;
    endY  = n;
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   
    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        /*如果只有一列*/ 
        if (startY == endY) {
        	for (j = startX; j <= endX; j++) {
        		    printf("%d", matrix[j][endY]);
                    count++;
                    if (j != endX) {
                        printf(" ");
                    }
			    
			}
		break;
		} else if (startX == endX) {
        	for(j=startY; j <= endY; j++) {
        		printf("%d", matrix[endX][j]);
                count ++;
	            if (j != endY){
                    printf(" ");
                }
			}
			break;
		} else {
			if (startY < endY) {
            	for (j = startY; j <= endY; j++) {
                	printf("%d", matrix[startX][j]);
                    count++;
                	if (count != m*n) {
                    	printf(" ");
                	}
            	}
        	}
        	if (startX < endX) {
            	for (j = startX + 1; j <= endX; j++) {
                	printf("%d", matrix[j][endY]);
                	count++;
                	if (count != m*n) {
                    	printf(" ");
                	}
            	}
        	}
        	if (endX > startX && startY < endY) {
            	for (j = endY - 1; j >= startY; j--) {
                	printf("%d", matrix[endX][j]);
                	count++;
                	if (count != m*n) {
                    	printf(" ");
                	}
            	}
        	}
        /*满足以下条件输出第四步*/
        	if (endX - 1 > startX && startY < endY) {
            	for (i = endX - 1; i >= startX + 1; i--) {
                	printf("%d", matrix[i][startX]);
                	count++;
                	if (count != m*n) {
                    	printf(" ");
                	}
            	}
        	}
        	
		}
		startX++;
        startY++;    
    }
    
    return 0;
}
