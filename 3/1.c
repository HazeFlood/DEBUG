#include <stdio.h>
#include<math.h>


int main() 
{
    int matrix[100][100];
    int m;
    int n;
    int i,j;
    int x;
    
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++){
    	for(j = 0; j < n; j++){
    		scanf("%d", &matrix[i][j]);
		}
	}
	x = 0;
	while (m - 2 * x > 1 && n - 2 * x > 1) {
		for (i = x; i < n - 1 - x; i++) { 
			printf("%d ",matrix[x][i]);
		}
		for (i = x;i < m - 1 - x; i++) {
			printf("%d ",matrix[i][n - 1 - x]);  
		}
		for (i = n - 1 - x;i > x; i--) {
			printf("%d ",matrix[m - 1 - x][i]);
		}
		for (i = m - 1 - x;i > x; i--) {
			printf("%d ",matrix[i][x]);
		}
		x ++;
	}
	if (m -2 * x == 1)
	{
		for(i = x; i <= n - 1 - x; i++){ 
			printf("%d ",matrix[x][i]);
		}
	} else if (n - 2 * x == 1)
	{
		for (i = x;i <= m - 1 - x; i++) {
			printf("%d ",matrix[i][n - 1 - x]);  
		}
	}
	
    return 0;
}
