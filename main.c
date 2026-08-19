#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main () {
              setlocale (LC_ALL, "Portuguese");
	int resp=1, tipo; 
	float angulo, seno, cosseno, tangente, secante, cossecante, cotangente, arcoseno, arcocosseno, arcotangente;
	
	do { 

		do { // caso a pessoa digite um número diferente do pedido
			printf ("\033[1;32m"); //muda a cor da fonte para verde
			printf ("\nO ângulo será fornecido em (1.graus/2.radianos)? ");
			scanf ("%d", &tipo);
		} while (tipo!=1 && tipo!=2); // caso a pessoa digite um número diferente do pedido

		printf ("\nQual o valor do ângulo? ");
		scanf ("%f", &angulo);
					
		if (tipo==1) 
			angulo= (float)angulo*(M_PI/180); // transforma o ângulo de graus para radianos
			
		seno = sin(angulo); 
		cosseno = cos(angulo);
		tangente = tan(angulo);
		secante = 1/cosseno;
		cossecante = 1/seno;
		cotangente = 1/tangente;
		arcoseno = asin(seno);
		arcocosseno = acos(cosseno);
		arcotangente = atan(tangente);
				
		printf ("\033[1;36m"); //muda a cor da fonte para verde agua
		printf("\nSeno = %.4f\n",seno);
		printf("Cosseno = %.4f\n",cosseno);
		printf("Tangente = %.4f\n",tangente);
		printf("Secante = %.4f\n",secante);
		printf("Cossecante = %.4f\n",cossecante);
		printf("Cotangente = %.4f\n",cotangente);
		printf("Arco seno = %.4f\n",arcoseno);
		printf("Arco cosseno = %.4f\n",arcocosseno);
		printf("Arco tangente = %.4f\n",arcotangente);
			
			
		// reprocessamento
		do { 
			printf ("\033[1;32m"); //muda a cor da fonte para verde
			printf ("\nDeseja fornecer outro ângulo (1.sim/2.não)? ");
			scanf ("%d",&resp);
		} while (resp!=1 && resp !=2); // caso a pessoa não digite o número desejado
		
		if (resp==2) { // encerra o programa
			printf ("\033[1;33m"); //muda a cor da fonte para amarelo
			printf ("\nENCERRANDO O PROGRAMA...\n");
		}
			
	} while (resp==1); 	
}