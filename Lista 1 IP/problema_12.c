#include <stdio.h>

int main()
{
	double massa, acel, segu, vel, espa, tra;
	
	scanf("%lf %lf %lf", &massa, &acel, &segu);
	
	vel = ((acel * segu)*3.6);
	
	espa = ((acel * segu * segu)/2);
	
	tra = ((massa*1000) * (vel/3.6) * (vel/3.6))/2;
	
	printf("VELOCIDADE = %.2lf\n", vel);
	
	printf("ESPACO PERCORRIDO = %.2lf\n", espa);
	
	printf("TRABALHO REALIZADO = %.2lf\n", tra);
	
	return 0;
}

