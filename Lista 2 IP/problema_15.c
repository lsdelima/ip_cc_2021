#include <stdio.h>

int main(int argc, char **argv)
{
	int CC, DR, RT, grau;
	
	scanf("%d %d %d", &CC, &DR, &RT);
	
	if ((CC < 7) && (DR > 50) && (RT > 80000)){
		grau = 10;
	}else if ((CC < 7) && (DR > 50)){
		grau = 9;
	}else if ((CC < 7)){
		grau = 8;
	}else{
		grau = 7;
	}
	
	printf("ACO DE GRAU = %d", grau);
	
	return 0;
}

