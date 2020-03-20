#include<stdio.h>
int main()
{
	int a,b,c,maior;
	
	printf("Digite os numeros:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b && a>c){
		maior=a;
		printf("O maior e %d", maior);
	}
	else if(b>a && b>c){
		maior=b;
		printf("O maior e %d", maior);
	
	}
	else{
		maior=c;
		printf("o maior e %d", maior);
	}
	return 0;
}
