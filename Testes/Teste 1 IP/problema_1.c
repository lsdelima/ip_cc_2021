#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e, maior, menor;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	
	if((a >= b) && (a >= c) && (a >= d) && (a >= e)){
		maior = a;
		
	}else if((b >= a) && (b >= c) && (b >= d) && (b >= e)){
		maior = b;
		
	}else if((c >= a) && (c >= b) && (c >= d) && (c >= e)){
		maior = c;
		
	}else if((d >= a) && (d >= c) && (d >= b) && (d >= e)){
		maior = d;
		
	}else if((e >= a) && (e >= b) && (e >= d) && (e >= c)){
		maior = e;
	}
	
	
	if((a <= b) && (a <= c) && (a <= d) && (a <= e)){
		menor = a;
		
	}else if((b <= a) && (b <= c) && (b <= d) && (b <= e)){
		menor = b;
		
	}else if((c <= a) && (c <= b) && (c <= d) && (c <= e)){
		menor = c;
		
	}else if((d <= a) && (d <= c) && (d <= b) && (d <= e)){
		menor = d;
		
	}else if((e <= a) && (e <= b) && (e <= d) && (e <= c)){
		menor = e;
	}
	
	printf("MENOR: %d, MAIOR: %d\n", menor, maior);
	
	
	 if ((a > b) && (b > c) && (c > d) && (d > e)){
		printf("ORDENADO DECRESCENTE\n");
	}else if ((a < b) && (b < c) && (c < d) && (d < e)){
		printf("ORDENADO CRESCENTE\n");
	}else printf ("DESORDENADO\n");
	
	
	return 0;
}

