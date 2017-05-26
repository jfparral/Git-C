#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tamano 1024

void cifradociclico(char mensaje[],int clave);

int main()
{
int clave;
char *frase;
size_t largo= Tamano;
size_t oracion;
frase= (char*)malloc(largo* sizeof(char));
	printf("Bienvenido al Cifrador\n");
	printf("Por favor ingrese la una frase: ");
	oracion=getline(&frase,&largo,stdin);
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
		if(mensaje[i]!= '\0')
		{
			if(mensaje[i]<=90 && mensaje[i]>64 )
			{
				if(mensaje[i]+clave>90)
				{
					salida[i]=(mensaje[i]+clave)-25;
				}
				else
				{
					salida[i]=mensaje[i]+clave;
				}
			}
			else if(mensaje[i]>96 && mensaje[i]<=122)
			{
				if(mensaje[i]+clave>122)
				{
					salida[i]=(mensaje[i]+clave)-25;
				}
				else
				{
					salida[i]=mensaje[i]+clave;
				}
			}
			else 
			{
					salida[i]=mensaje[i];
			}
		}
		else
		{
			salida[i]=mensaje[i];
		}
	}
	printf("El codigo cifrado de llave %d: ",clave);
        printf("\n%s\n",salida);
}
