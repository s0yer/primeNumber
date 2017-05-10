#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int n,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo;			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = TRUE se o numero dado 'e primo */
	/*  EhPrimo = FALSE se o numero dado nao 'e primo        */
   

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);


    if (n <= 1 || (n != 2 && n % 2 == 0))
	EhPrimo = FALSE;	/* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    else
	EhPrimo = TRUE;		/* o numero e' primo ate que se prove o contrario */


    d = 3;
    while (EhPrimo  && d <= n / 2) {
	if (n % d == 0)
	    EhPrimo = 0;
	d = d + 2;		/* testamos so' os  impares: 3, 5, 7... */
    }

    if (EhPrimo)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

    return 0;
}
