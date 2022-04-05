#include <stdio.h>

int main(int argc, char **argv)
{
	double N, NY, BASE = 1;
	int NN, BASS, cont,div;
	
	scanf ("%lf", &N);
	
	NY = ((int)N);
	
	while((N - NY) > 0.0){
		N = N*10;
		
		BASE = BASE *10;
		
		NY = ((int)N);

	}
	
	NN = ((int)N);
	BASS = ((int)BASE);
	
	do{
		cont++;
		
		if((NN % cont == 0) && (BASS%cont == 0)) div = cont;
		
	}while(cont <= NY);
	
	
	printf("%d/%d",NN/div,BASS/div);
	

	return 0;
}

