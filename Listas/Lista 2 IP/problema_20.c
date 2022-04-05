#include <stdio.h>

int main(int argc, char **argv)
{
	double renda;
	int fal , esc, eti; 
	
	scanf("%lf", &renda);
	
	scanf("%d %d %d", &fal, &esc, &eti);
	
	if(esc == 1){
		printf("ALUNO NAO COTISTA");
		return 0;
		
	}else if(esc == 2){
		
		if (((renda/fal) <= (937.00 * 1.5)) && ((eti == 1) || (eti == 2) || (eti == 3))){
			printf("ALUNO COTISTA (L2)");
			
		}else if (((renda/fal) >= (937.00 * 1.5)) && ((eti == 1) || (eti == 2) || (eti == 3))){
			printf("ALUNO COTISTA (L4)");
			
		}else if((renda/fal) <= (937.00 * 1.5)){
			printf("ALUNO COTISTA (L1)");
		
		}else if ((renda/fal) >= (937.00 * 1.5)){
			printf("ALUNO COTISTA (L3)");
			
		} else{
	
		}
			
	}	
	
	
	return 0;
}

