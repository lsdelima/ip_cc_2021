#include <stdio.h>

int main(int argc, char **argv)
{
	int a, q, w, e, r, t, palk;
	
	scanf("%d", &a);
	
	if((a>= -99999) && (a<=99999)){
		q = a / 10000;
		w = (a - q*10000) / 1000;
		e = (a - (q*10000) - (w*1000)) / 100;
		r = (a - (q*10000) - (w*1000) - (e*100)) / 10;
		t = (a - (q*10000) - (w*1000) - (e*100) - (r*10)) / 1;	
		
		if ((a >= -99999) && (a <= 99999)){
			if((q == t) && (w == r)){
				palk = 1;
			} else{
				palk = 0;
			}	
		} if((a >= -9999) && (a <=9999)){
			if((w == t) && (e == r)){
				palk = 1;
			} else{
				palk = 0;
			}
		} if((a >= -999) && (a <= 999)){
			if((e == t)){
				palk = 1;
			} else{
				palk = 0;
			}
		} if((a >= -99) && (a <= 99)){
			if((r == t)){
				palk = 1;
			} else{
				palk = 0;
			}
		} if((a >= -9) && (a <= 9)){
				palk = 1;
			}

	if(palk == 1){
		printf("PALINDROMO");
	}else{
		printf("NAO PALINDROMO");
	}
			
	}else{
		printf("NUMERO INVALIDO");
	}

	return 0;
}

