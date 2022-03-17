#include"stdio.h"

main(){
	int *p1;
	int x, y = 20;
	
	p1 = &y;
	
	printf("%d\n", y);// -->20
	printf("%d\n", *p1);// -->20
	
	getch();
}
