#include"stdio.h"
//Repeat/Loop --> while, do-while, for
main(){
	int x = 0;
	int y;
	while( x < 10 ){
		x = x + 3;
		printf("a");
	}
	printf("\n-----------------\n");
	
	x = 1;
	do{
		x = x * 2;
		printf("b");
		x = x +5;
	}while( x <= 25 );
	printf("\n-----------------\n");
	
	for( x = 0 ; x <= 15 ; x = x + 7){
		printf("z");
		printf("y");
	}
	printf("\n-----------------\n");
	
	for(y = 1; y <= 10; y = y +2){
		printf("a\n");
		for(x =1; x <= y; x++){
			printf("#");
		}
		printf("b\n");
	}
	
	getch();
}
