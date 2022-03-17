//Control Statement***
//--Selection/Condition
//->if, if-else, if-else-if, switch

//--Repeat/Loop
//->while, do-while, for

#include"stdio.h"

main(){
	int x = 20;
	
	if( x > 5 % 3 *2 + 5 *2 ){
		printf("AAA");
	}
	//-----------------------------
	if( x < 15 ){
		printf("111");
	}else{
		printf("222");
		printf("333");
	}
	//-----------------------------
	if( x < 15 ){
		printf("111");
	}else if( x < 10 ){
		printf("222");
	}else if( x < 5 ){
		printf("333");
	}else if( x < 0 ){
		printf("444");
	}else{
		printf("555");
	}
	//-----------------------------
	switch( x ){
		case 0 : printf("a"); break;
		case 20 : printf("b"); break;
		case 500 : printf("c"); break;
		default : printf("d");
	}
	
	
	getch();
}
