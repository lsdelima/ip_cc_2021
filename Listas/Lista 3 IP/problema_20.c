#include <stdio.h>

int main(int argc, char **argv)
{
	int m, n, x , y, inc = 1;
	
	scanf("%d %d",&m, &n);
	
	for(x = 1; x <= m; x++){
		for (y = 1; y <= n; y++){
			if((inc == 1) && ( y < x)){
				printf("(%d,%d)", x,y);
				inc = 0;	
			}else if ( y < x) printf("-(%d,%d)", x,y);
		}
		inc = 1;
		printf("\n");
	}
	
	
	return 0;
}


