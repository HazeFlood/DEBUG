#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m, n, nIndex, mIndex;
    int i, j, times;
    int matrixpass[110][110];
    int orientation = 0, p = 0;
    
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int k, l;

    k = m;
    l = n;
    times  = 0;
    mIndex = 0;
    nIndex = 0;
    
    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            matrixpass[i][j] = 0;
        }
    }
    while(times <= m * n){
        if (orientation % 4 == 0) {  
            while (matrixpass[mIndex][nIndex] == 0 && nIndex <= l - 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                nIndex++;
                times++;
                if (times != m * n) {
                    printf(" ");
                } else {
                    return 0;
                }
            }
            orientation++;
            mIndex++;
            nIndex--;
        }
        if (orientation % 4 == 1) {  
            while (matrixpass[mIndex][nIndex] == 0 && mIndex <= k - 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                mIndex++;
                times++;
                if(times != m * n) {
                    printf(" ");
                } else {
                    return 0;
                }
            }
            orientation++;
            mIndex--;
            nIndex--;
        }
        if(orientation % 4 == 2) {  
            while (matrixpass[mIndex][nIndex] == 0 && nIndex >= p) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                nIndex--;
                times++;
                if(times != m * n) {
                    printf(" ");
                } else {
                return 0;
                }
            }
            orientation++;
            mIndex--;
            nIndex++;
        }
        if (orientation % 4 == 3) {  
            while (matrixpass[mIndex][nIndex] == 0 && mIndex >= p + 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                mIndex--;
                times++;
                if (times != m * n) {
                    printf(" ");
                } else {
                    return 0;
                }
            }
            orientation++;
            mIndex++;
            nIndex++;
        }
        k--;
        l--;
        p++;
    }       
    return 0;
}
