#include <stdio.h>

int main(int argc, char **argv)
{
	int ns, dv, n1, n2, n3, n4, n5, n6, n7, n8, uf1, uf2, cal1, cal2, uf;
	
	scanf("%d %d", &ns, &uf);
	
	n1 = ns / 10000000;
	n2 = (ns - n1*10000000) / 1000000;
	n3 = (ns - (n1*10000000) - (n2*1000000)) / 100000;
	n4 = (ns - (n1*10000000) - (n2*1000000) - (n3*100000)) / 10000;
	n5 = (ns - (n1*10000000) - (n2*1000000) - (n3*100000) - (n4*10000)) / 1000;
	n6 = (ns - (n1*10000000) - (n2*1000000) - (n3*100000) - (n4*10000) - (n5*1000)) / 100;
	n7 = (ns - (n1*10000000) - (n2*1000000) - (n3*100000) - (n4*10000) - (n5*1000) - (n6*100)) / 10;
	n8 = (ns - (n1*10000000) - (n2*1000000) - (n3*100000) - (n4*10000) - (n5*1000) - (n6*100) - (n7*10))/ 1;
	
	uf1 = uf / 10;
	uf2 = uf - (uf1*10);
	
	cal1 = ((n1*2) + (n2*3) + (n3*4) + (n4*5) + (n5*6) + (n6*7) + (n7*8) + (n8*9)) % 11; 
	
	
	if (cal1 == 10) cal1 = 0;
	
	cal2 = ((uf1*7) + (uf2 * 8) + (cal1 * 9)) % 11;
	
	if (cal2 == 10) cal2 = 0;
	
	dv = ((ns*100) + uf);
	
	if(( uf >= 1) && (uf<=28)){
	printf("%d/%d%d",dv,cal1,cal2);
	}
	else printf ("CODIGO DA UF INVALIDO!");
	
	return 0;
}
