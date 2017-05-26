#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tamano 1024

void cifradociclico(char mensaje[],int clave);
void morse(char mensaje[]);
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
	morse(frase);
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

// Funcion codigo morse
void morse(mensaje[])
{
	char alfM[26]={'A','B','C','D','E','F','G','H',
	'I','J','K','L','M','N','O','P','Q','R','S',
	'T','U','V','W','X','Y','Z'};
	char alfm[26]={'a','b','c','d','e','f','g','h',
	'i','j','k','l','m','n','o','p','q','r','s',
	't','u','v','w','x','y','z'};
	char cod[26]={}
}