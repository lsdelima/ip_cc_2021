#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
	
	double d[4];
	
} Point4D;

double dist( Point4D a, Point4D b) {
	
	double l1, l2, l3, l4;
	
	l1 = a.d[0] - b.d[0];
	
	l2 = a.d[1] - b.d[1];
	
	l3 = a.d[2] - b.d[2];
	
	l4 = a.d[3] - b.d[3];
	
	return sqrt(pow(l1,2) + pow(l2,2) + pow(l3,2) + pow(l4,2));
}

int main(void) {

	int n, cont;
	
	double distan;
	
	Point4D * pt = NULL;

	scanf("%d", &n);
	
	pt = (Point4D *) calloc(n, sizeof(Point4D));

	for(cont = 0;cont < n;cont++) {
		
		scanf("%lf", &pt[cont].d[0]);
		
		scanf("%lf", &pt[cont].d[1]);
		
		scanf("%lf", &pt[cont].d[2]);
		
		scanf("%lf", &pt[cont].d[3]);
		
	}
	

	for(cont = 0;cont < (n-1);cont++){
		
		distan = dist(pt[cont], pt[cont+1]);
		
		printf("%.2lf\n", distan);
	}

	free(pt);
	
	return 0;
}
