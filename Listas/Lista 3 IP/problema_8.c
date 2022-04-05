#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, ano = 0;
	
	scanf("%d %d", &a, &b);
	
	
	if(a < b){
	while(a <= b){
		a = a + (a * 0.03);
		b = b + (b * 0.015);
		ano++;
		
	}}
	
	printf("ANOS = %d\n", ano);
	return 0;
}

