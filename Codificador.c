#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tamano 2014

void cifradociclico(char mensaje[],int clave);

int main()
{
int clave;
char *frase;
size_t largo= Tamano;
size_t oracion;
frase= (char*)malloc(largo* sizeof(char));
	printf("Por favor ingrese la una frase: ");
	oracion= getline(&frase,&largo,stdin);
	printf("\n");
	printf("Por favor ingrese la clave para cifrar: ");
        scanf("%d",&clave);
	printf("\n");
	cifradociclico(frase,clave);
	return 0;
}
/* Implementacion de cifrado ciclico
recibe un mensaje y cambia las letras
segun la llave que se ingrese*/
 void cifradociclico(char mensaje[], int clave)
 {
	int i=0;
	char salida[Tamano];
	for(i=0;i<=Tamano;i++)
	{
		
		letra=string[i];
		ascii=letra;
		ascii=ascii+clave;
		nueva=toascii(ascii);
		salida[i]=nueva;
	}
	printf("El codigo cifrado de llave %d: ",clave);
        printf("\n");
	printf("%s",salida);
	printf("\n");
 }
