#include <stdio.h>

void converteEmNotasMoedas(int nota, int *nota100, int *nota50, int *nota10, int *nota1){
	
	*nota100 = nota/100;
	
	*nota50 = (nota%100)/50;
	
	*nota10 = ((nota%100)%50)/10;
	
	*nota1 = (((nota%100)%50)%10)/1;
	
}

int main(int argc, char **argv)
{
	int nota, nota100, nota50, nota10, nota1;
	
	scanf("%d", &nota);
	
	converteEmNotasMoedas(nota, &nota100, &nota50, &nota10, &nota1);
	
	printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", nota100, nota50, nota10, nota1);
	
	return 0;
}

