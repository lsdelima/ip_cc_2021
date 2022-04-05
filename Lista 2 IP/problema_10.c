#include <stdio.h>

int main(int argc, char **argv)
{
	int num, q, w, e, r;
	
	scanf("%d", &num);
	
	if ((num <= 0) || (num > 9999)){
		printf("Numero invalido!");
	} else{
		
		
		q = num / 1000;
		w = (num - q*1000) / 100;
		e = (num - (q*1000) - (w*100)) / 10;
		r = (num - (q*1000) - (w*100) - (e*10)) / 1;
		
		
		if(q > 0){
		printf("(quarta ordem) %d =", num);
		}else if(w > 0){
		printf("(terceira ordem) %d =", num);
		}else if(e > 0){
		printf("(segunda ordem) %d =", num);
		}else if(r > 0){
		printf("(primeira ordem) %d =", num);
		}
		
		
		if(q != 0){
			printf(" %d unidade de milhar", q);
			if (q > 1) printf("s");
		} if(w != 0){
			if (q > 0) printf(" +");
			printf(" %d centena", w);
			if (w > 1) printf("s");
		}if(e != 0){
			if (w > 0) printf(" +");
			printf(" %d dezena", e);
			if (e > 1) printf("s");
		}if(r != 0){
			if (e > 0) printf(" +");
			printf(" %d unidade", r);
			if (r > 1) printf("s");
		} printf (" =");
		
		
		if(q != 0){
			printf(" %d", q*1000);
		} if(w != 0){
			if (q > 0) printf(" +");
			printf(" %d", w*100);
		}if(e != 0){
			if (w > 0) printf(" +");
			printf(" %d", e*10);
		}if(r != 0){
			if (e > 0) printf(" +");
			printf(" %d", r);
		}
	
		
	}
	
	return 0;
}

