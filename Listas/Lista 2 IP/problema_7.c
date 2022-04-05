#include <stdio.h>

int main(int argc, char **argv)
{
	float sal, salres;
	
	scanf("%f", &sal);
	
	if(sal <= 300){
		salres = sal + (sal*0.5);
		
	}else{
		salres = sal + (sal*0.3);
	}
	
	printf("SALARIO COM REAJUSTE = %.2f\n", salres);
	
	return 0;
}

