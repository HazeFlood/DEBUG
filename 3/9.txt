#include <stdio.h>

int main() 
{
	int matrix_pass[110][110];
    int matrix[100][100];
    int orientation = 0;
    int m, n, i, j;
    int nIndex;
    int mIndex;
    int times;
    int p = 0;
   
    /* input arguements */
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    /* count to zero */
    int k;
    int l;
    
    k = m;
    l = n;
    times = 0;
    mIndex = 0;
    nIndex = 0;
    
    for (i = 0; i < 110; i++) {
        for (j = 0; j < 110; j++) {
            matrix_pass[i][j] = 0;
        }
    }
    if (times <= m * n) {
        for (i = 0; i < 6; i++) {
        if (orientation % 4 == 0) {  /* right */ 
            while (matrix_pass[mIndex][nIndex] == 0 && nIndex <= l - 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrix_pass[mIndex][nIndex] = 1;
                nIndex ++ ;
                times ++ ;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation ++ ;
            mIndex ++ ;
            nIndex -- ;  
        }
        
        if (orientation % 4 == 1) {  /* down */ 
            while (matrix_pass[mIndex][nIndex] == 0 && mIndex <= k - 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrix_pass[mIndex][nIndex] = 1;
                mIndex ++ ;
                times ++ ;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation ++ ;
            mIndex -- ;
            nIndex -- ;
        }
        
        if (orientation % 4 == 2) {  /* left */ 
            while (matrix_pass[mIndex][nIndex] == 0 && nIndex >= p) {
                printf("%d", matrix[mIndex][nIndex]);
                matrix_pass[mIndex][nIndex] = 1;
                nIndex -- ;
                times ++ ;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation ++ ;
            mIndex -- ;
            nIndex ++ ;  
        }
        
        if (orientation % 4 == 3) {  /* up */ 
            while (matrix_pass[mIndex][nIndex] == 0 && mIndex >= p + 1){
                printf("%d", matrix[mIndex][nIndex]);
                matrix_pass[mIndex][nIndex] = 1;
                mIndex--;
                times++;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation ++ ;
            mIndex ++ ;
            nIndex ++ ;  
        }
        k -- ;
        l -- ;
        p ++ ;
        }
    }
    
    return 0;
}