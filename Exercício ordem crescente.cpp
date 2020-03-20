#include<stdio.h>
int main()
{
	int a, b, c;
	printf("digite tres numeros:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b && a>=c){
		if(b>=c){
			printf("\nA ordem e %d, %d, %d", c,b,a);
		}
		else{
			printf("\nA ordem e %d, %d, %d", b,c,a);
		}
	}
	
	else if(b>=a && b>=c){
		if(a>=c){
			printf("\nA ordem e %d, %d, %d", c,a,b);
		}
		else{
			printf("\nA ordem e %d, %d, %d", a,c,b);
		}
	}
	
	else{
		if(a>=b){
			printf("\nA ordem e %d, %d, %d", b,a,c);
		}
		else{
			printf("\nA ordem e %d, %d, %d", a,b,c);
		}
	}

	return 0;
}
