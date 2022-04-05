#include <stdio.h>
#include <math.h>

# define Max 1000

int main(int argc, char **argv)
{
	int test, cont, cont2;
	
	scanf("%d", &test);
	
	if((test >= 2) && (test <= Max)){
		
		double cod[test][3];
		
		double res[3], aux;
		
		for (cont = 0;cont < test;cont++){
			
			for (cont2 = 0;cont2 < 3; cont2++){
			
			scanf("%lf", &cod[cont][cont2]);	
				
			}
			
		}
		
		for (cont = 0;cont < 3;cont++){
			
			for (cont2 = (test-1);cont2 >= 0; cont2--){
			
			if(cont2 == (test-1)) res[cont] = cod[cont2][cont];
			else res[cont] = res[cont] - cod[cont2][cont];
			
			}
			
		}
		
		for (cont = 0;cont < test;cont++){
			
		res[cont] = fabs(res[cont]);
			
		}
		
		for (cont = 0;cont < (test-1);cont++){
			
		for (cont2 = 0;cont2 < (test-1); cont2++){
			
			if(res[cont] <= res[cont2]){
					aux = res[cont2];
					res[cont2] = res[cont];
					res[cont] = aux;
				}
				
			}
			
		}
		
	
		for (cont = 0;cont < (test-1);cont++){
			
		printf("%.2lf\n", res[cont]);
			
		}
		
		
		
	}
	
	return 0;
}

