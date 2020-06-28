int main() 
{
    int matrix[100][100];
    int m, n;
    int k = 0;
    int l = 0;
    int i, j;
    int num;
    int cou = 0;
    
    scanf("%d %d", &m, &n);
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
      
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; i++)
        {
            printf("%d", matrix[k][i]);
			cou++;
			if (cou != m * n) {
				printf(" ");
			}
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (i = k; i < m; i++)
        {
            printf("%d", matrix[i][n - 1]);
			cou++;
            if (cou != m * n) {
                printf(" ");
            }

        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
            {
                printf("%d", matrix[m - 1][i]);
				cou++;
	            if (cou != m * n) {
		            printf(" ");
			    }
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
            {
                printf("%d", matrix[i][l]);
				cou++;
	            if (cou != m * n) {
		            printf(" ");
			    }
            }
            l++;    
        }   
	printf(" ");     
    }

    return 0;
}
