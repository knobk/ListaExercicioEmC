#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int op;
	double num1, num2;

	void setarNumeros(void) {
		printf("Informe o primeiro número: ");
		scanf("%lf", &num1);
		printf("Informe o segundo número: ");
		scanf("%lf", &num2);
	}
	
	void mostrarResultado(double resultado) {
		printf("Resultado: %.2lf\n", resultado);
	}

	printf("Escolha uma opção:\n");
	printf("1- Soma de 2 números.\n");
	printf("2- Diferença entre dois números (o maior pelo menor).\n");
	printf("3- Produto entre 2 números.\n");
	printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
	printf("Opção: ");
	scanf("%d", &op);

	switch(op) {
		case 1:
			setarNumeros();
			mostrarResultado(num1+num2);
			break;
		case 2:
			setarNumeros();
			if(num1 > num2)
				mostrarResultado(num1-num2);
			else
				mostrarResultado(num2-num1);
			break;
		case 3:
			setarNumeros();
			mostrarResultado(num1*num2);
			break;
		case 4:
			setarNumeros();
			if(num2) 
				mostrarResultado(num1/num2);
			else
				printf("O segundo número precisa ser diferente de zero!\n");
			break;
		default:
			printf("Opção inválida.\n");
	}

return 0;
}

