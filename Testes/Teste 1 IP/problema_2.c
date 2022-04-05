#include <stdio.h>

int main(int argc, char **argv)
{
	double a, b, c, real;
	
	char op, igual;
	
	scanf("%lf%c%lf%c%lf",&a, &op, &b, &igual, &c);
	if (igual == '='){
	if (op == '+'){
		real = a + b;
		if (real == c){	
			printf("CORRETO");
		} else { printf("ERRADO! O resultado deveria ser: %lf", real);
		}
		
	} if (op == '-'){
		real = a - b;
		if (real == c){	
			printf("CORRETO");
		} else { printf("ERRADO! O resultado deveria ser: %lf", real);
		}
		
	} if (op == '*'){
		real = a * b;
		if (real == c){	
			printf("CORRETO");
		} else { printf("ERRADO! O resultado deveria ser: %lf", real);
		}
		
	} if (op == '/'){
		real = a / b;
		if (real == c){	
			printf("CORRETO");
		} else { printf("ERRADO! O resultado deveria ser: %lf", real);
		}
	} 
}
	
	
	return 0;
}

