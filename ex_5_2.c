#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int i=1;
	
	do{
		printf("%d", i);
		i++;
	}while(i <= 10);
	
}
