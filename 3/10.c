#include <stdio.h>

int main() {
    int matrix[100][100];
    int m, n, i, j, num, count;
    int k = 0;
    int l = 0;
    
    scanf("%d %d", &m, &n);
    num = m * n;
    count = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   for (j = 0; j < n; j++) {
		printf("%d",matrix[0][j]);
        if (j != n - 1 || m >1) {
            printf(" ");
        }
		count++;
	}
		
	do{	
		int matrix_[n][m];//rotate the matrix to -90 degree which becomes matrix_

		for (i = 0; i < n; i++) {
			for (j = 0; j < m-1; j++) {
				matrix_[i][j] = matrix[j+1][n-1-i];

			}

		}
		
		for(j = 0; j < m-1; j++) {
			printf("%d",matrix_[0][j]);
			count++;
			if(count < num)
				printf(" ");
		}
	
		//cover original matrix with new matrix_	
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				matrix[i][j] = matrix_[i][j];
			}
		}
		
		int t;
		t = m;
		m = n;
		n = t-1;
			
	}while (m >= 1 && n >= 1);
	
    return 0;
}
