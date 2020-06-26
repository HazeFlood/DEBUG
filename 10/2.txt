#include<stdio.h>

int main()
{
   int n;
   int i;
   int j;
   
   scanf("%d",&n);
   if (n == 2) {
   		int x = 2;
   		printf("%d",x);
   } else {
        for (i = 3;i <= n;i = i+1)  {
        	int count = 0;
            for (j = 2;j < i;j = j + 1) {
				if (i % j == 0) {
                    count = 1;
                    break;
                } 
        	}
            if (count == 0){
            	printf("%d\n",i);
			}
    	}
    }
    
    return 0;
}