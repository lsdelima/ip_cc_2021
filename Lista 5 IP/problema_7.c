#include <stdio.h>

#define car 5

int main(int argc, char **argv)
{
	int N, cont, conti, comp;
	
	scanf("%d", &N);
	
	char string[car]; char one[car] = "one"; char two[car] = "two"; char three[car] = "three";
	
	for(cont = 1; cont <= N; cont++){
		scanf("%*c%[^\n]s", string);
		comp = 0;
		
		for (conti = 0; string[conti] != '\0'; conti++){
			if (((int)string[conti]) == ((int)one[conti])) comp++;
			
		} if ((comp == 2) || (comp == 3)) printf("%d\n", 1);comp = 0;
		
		
		for (conti = 0; string[conti] != '\0'; conti++){
			if (((int)string[conti]) == ((int)two[conti])) comp++;
		} if ((comp == 2) || (comp == 3)) printf("%d\n", 2);comp = 0;
		
		for (conti = 0; string[conti] != '\0'; conti++){
			if (((int)string[conti]) == ((int)three[conti])) comp++;
		} if ((comp == 4) || (comp == 5)) printf("%d\n", 3);comp = 0;
		
		
	}
	
	return 0;
}

