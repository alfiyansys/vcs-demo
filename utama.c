#include <stdio.h>

int main(){
	printf("Hello world!");
	function2();
	return 0;
}

int function1(){
	printf("F1 with return");
	return 1;
}

void function2(){
	printf("F2");
}
