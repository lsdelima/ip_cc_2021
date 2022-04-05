#include <stdio.h>
#include <math.h>

int classifica_iris(double pt, double pl, double st, double sl, double * d1, double* d2, double * d3){
	int flor;
	
	*d1 = sqrt( pow((6.85 - pt), 2) + pow((3.07 - pl), 2) + pow((5.74 - st), 2) + pow((2.07 - sl), 2) );
	
	*d2 = sqrt( pow((5.00 - pt), 2) + pow((3.41 - pl), 2) + pow((1.46 - st), 2) + pow((0.24 - sl), 2) );
	
	*d3 = sqrt( pow((5.90 - pt), 2) + pow((2.74 - pl), 2) + pow((4.39 - st), 2) + pow((1.43 - sl), 2) );
	
	printf(("(%.2lf %.2lf %.2lf) "), *d1,  *d2, *d3);
	
	if ((*d1< *d2) && (*d1< *d3)){
		flor = 1;
		
	} else if((*d2< *d1) && (*d2< *d3)){
		flor = 2;	
		
	}else if( (*d3< *d1) && (*d3< *d2)){
		flor = 3;	
	}
	
	
	return flor;
}


int main(int argc, char **argv)
{
	int info, flor;
	double pt, pl, st, sl, d1, d2, d3;
	
	
	do{
		
	info = scanf("%lf %lf %lf %lf", &pt, &pl, &st, &sl);
	
	if (info == EOF) break;
	
	flor = classifica_iris(pt, pl, st, sl, &d1, &d2, &d3); 
	
	if (flor == 1){
		printf("setosa\n");
		
	} else if(flor == 2){
		printf("virginica\n");
		
	}else if(flor == 3){
		printf("versicolor\n");
	}
	
	
	} while (info != EOF);	 	
	
	
	
	return 0;
}

