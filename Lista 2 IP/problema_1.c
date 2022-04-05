#include <stdio.h>

int main(int argc, char **argv)
{ 
	float a, b, c, media;
	
	scanf("%f %f %f", &a, &b, &c);
	
	media = (a + b + c)/3;
	
	printf("MEDIA = %.2f\n", media);
	
	if (media >= 6){
		printf("APROVADO\n");
	} else printf("REPROVADO\n");
		
	return 0;
}

