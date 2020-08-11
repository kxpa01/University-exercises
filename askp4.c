#include <stdio.h>

int main(){
	int mon, tet, x, y;
	
	printf("Dwste tetrapsifio akeraio: \n");
	scanf("%d", &tet);
	
	printf("Dwste monopsifio akeraio: \n");
	scanf("%d", &mon);
	
	x = tet / 100;
	y = tet % 100;
	
	printf("%d%d%d", x,mon,y);
	
	/*from askhseis praxhs
	i = tet*1000 + mon*100 + y;
	printf("%d\n", i); */
	
	
	return 0;
}
