#include <stdio.h>

int main(int argc, char **argv)
{
	int mat, hor,info = 1;
	double sal, salf;
	
	while (info != 0){
		
		info = scanf("%d %d %lf", &mat, &hor, &sal);
		getchar();
		
		salf = hor*sal;
		
		if ((mat == 0) && (hor == 0) && (sal == 0)) info = 0;
		else printf("%d %.2lf\n", mat, salf);
	
	}
	
	
	
	
	return 0;
}

