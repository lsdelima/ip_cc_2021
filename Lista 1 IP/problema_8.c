#include <stdio.h>

int main(int argc, char **argv)
{
	int hora,minu,segu,total;
	
	scanf("%d %d %d", &hora, &minu, &segu);
	
	hora = ((hora*60)*60);
	minu = (minu*60);
	
	total = hora + minu + segu;
	
	printf("O TEMPO EM SEGUNDOS E = %d\n", total);
	return 0;
}

