#include <stdio.h>

int main(int argc, char **argv)
{
	int data, q, w, e, r, t , y , u, i, dia, mes, ano;
	
	scanf("%d", &data);
	
	q = data / 10000000;
	w = (data - q*10000000) / 1000000;
	e = (data - (q*10000000) - (w*1000000)) / 100000;
	r = (data - (q*10000000) - (w*1000000) - (e*100000)) / 10000;
	t = (data - (q*10000000) - (w*1000000) - (e*100000) - (r*10000)) / 1000;
	y = (data - (q*10000000) - (w*1000000) - (e*100000) - (r*10000) - (t*1000)) / 100;
	u = (data - (q*10000000) - (w*1000000) - (e*100000) - (r*10000) - (t*1000) - (y*100)) / 10;
	i = (data - (q*10000000) - (w*1000000) - (e*100000) - (r*10000) - (t*1000) - (y*100) - (u*10))/ 1;
	
	dia = (q*10) + w;
	
	mes = (e*10) + r;
	
	ano = (t*1000) + (y*100) + (u*10) + i;
	
	if ((data < 0) || (data > 99999999)){
		printf(" Data invalida!");
		
		
	}else{
	
		if ((mes >= 1) && (mes <= 12)){
			
			if ((mes == 4) || (mes == 6) || (mes == 9) || ( mes == 11)){
	
				if ((dia > 30) || (dia < 0)){
					
					printf(" Data invalida!");
					
				} else{ 
					
						if (mes == 4){
							printf("%d de abril de %d", dia, ano);
							
						}if (mes == 6){
							printf("%d de junho de %d", dia, ano);
							
						}if (mes == 9){
							printf("%d de setembro de %d", dia, ano);
							
						}if (mes == 11){
							printf("%d de novembro de %d", dia, ano);
							
						}
				}	
					
			} if (mes == 2){ 
				
				if ((dia > 28) || (dia < 0)){
					
					printf("Data invalida!");
					
				} else{ 
							printf("%d de fevereiro de %d", dia, ano);
						
				}
				
			} if ((mes == 1) || (mes == 3) || (mes == 5) || ( mes == 7) || (mes == 8) || (mes == 10) || ( mes == 12)) {
				
					if ((dia > 31) || (dia < 0)){
				
					printf(" Data invalida!");
					
				} else{ 
					
						if (mes == 1){
							printf("%d de janeiro de %d", dia, ano);
							
						}if (mes == 3){
							printf("%d de março de %d", dia, ano);
							
						}if (mes == 5){
							printf("%d de maio de %d", dia, ano);
							
						}if (mes == 7){
							printf("%d de julho de %d", dia, ano);
							
						}if (mes == 8){
							printf("%d de agosto de %d", dia, ano);
							
						}if (mes == 10){
							printf("%d de outubro de %d", dia, ano);
							
						}if (mes == 12){
							printf("%d de dezembro de %d", dia, ano);
										}
						}
				}
		} else printf("Data invalida!"); 

}
	
	return 0;
}

