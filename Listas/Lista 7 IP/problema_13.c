#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Complex{
	  float real;
	  
	  float imag;

}complex;

typedef struct RaizEqu2{
	  complex x1;
	  
	  complex x2;

}RaizEqu2;

struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c){
  
	double delta;

	RaizEqu2 raiz;
	
	delta = ((b * b) - 4 * a * c);

	raiz.x1.imag = raiz.x2.imag = 0;

	if(delta < 0){
    
		raiz.x1.real = raiz.x2.real=((-b)/(2*a));
    
		raiz.x1.imag = ((sqrt(-delta))/(2*a));
		raiz.x2.imag = -((sqrt(-delta))/(2*a));

	} else if ((delta == 0) || (a==0)){

		if(a != 0) raiz.x1.real = raiz.x2.real = ((-b)/(2*a));
		else raiz.x1.real = raiz.x2.real = ((-c)/b);
		
	}else if (delta > 0){
		
		raiz.x1.real = (((-b) + sqrt(delta)) / (2*a));
		raiz.x2.real = (((-b) - sqrt(delta)) / (2*a));	
	}

	if ((raiz.x1.real==0) && (raiz.x2.real==0)){
		
		raiz.x1.real = raiz.x2.real = 0;
	}

  return raiz;
}

void complex_print(struct Complex c){

	if (c.imag == -0.0) c.imag = 0.0;

	if(c.imag == 0.0 || c.imag == -0.0){
		printf("%.2f\n", c.real);
	}

	else{

		if((c.imag == -1) && ( c.real != 0))
			printf("%.2f-i\n",c.real);
		else if((c.imag == 1) && ( c.real != 0))
			printf("%.2f+i\n",c.real);
		else if ((c.imag < 0) && ( c.real != 0))
			printf("%.2f%.2fi\n",c.real,c.imag);
		else if ((c.imag > 0) && ( c.real != 0))
			printf("%.2f+%.2fi\n",c.real,c.imag);
		else if((c.imag == -1) && ( c.real == 0))
			printf("-i\n");
		else if((c.imag == 1) && ( c.real == 0))
			printf("i\n");
    
  }
  
  return;
}


int main(void)
{
	double a, b, c;
	
	RaizEqu2 var;
	
	scanf("%lf %lf %lf", &a, &b, &c);

	var = calcula_raiz_equ_2(a, b, c);

	printf("x1 = ");
	complex_print(var.x1);

	printf("x2 = ");
	complex_print(var.x2);

	return 0;
}

