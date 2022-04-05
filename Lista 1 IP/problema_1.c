#include <stdio.h>

int main(int argc, char **argv){

	double salmin, quankw, custkw, custcons, custot;
	
	scanf("%lf %lf",&salmin, &quankw);
	  
	custkw = (0.70 * salmin)/100;
	
	custcons = custkw * quankw;
	
	custot = custcons - (custcons * 0.10);
	 
	printf("Custo por kW: R$ %.2lf \n", custkw);
	
	printf("Custo do consumo: R$ %.2lf \n", custcons);
	
	printf("Custo com desconto: R$ %.2lf", custot);
	 
	return 0;
}

