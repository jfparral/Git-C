#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tamano 1024

void cifradociclico(char mensaje[],int clave);
void morse(char mensaje[]);
int main(int argc, char *argv[])
{
int clave;
char *frase;
size_t largo= Tamano;
size_t oracion;
frase= (char*)malloc(largo* sizeof(char));
	if(argc==1)
	{
		printf("Bienvenido al Cifrador\n");
		printf("Por favor ingrese una frase: ");
		oracion=getline(&frase,&largo,stdin);
		printf("Por favor ingrese la clave para cifrar: ");
		scanf("%d",&clave);
		printf("\n");
		cifradociclico(frase,clave);
		printf("\n");
	}
	else
	{
		cifradociclico(argv[argc-1],atoi(argv[argc-2]));
		printf("\n");
	}
	return 0;
}
/* Implementacion de cifrado ciclico
recibe un mensaje y cambia las letras
segun la llave que se ingrese*/
 void cifradociclico(char mensaje[], int clave)
 {
	int i=0;
	char salida[Tamano],salidamorse[Tamano];
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
    printf("%s\n",salida);
	strcpy(salidamorse,salida);
    printf("Codigo cifrado en morse: ");
	morse(salidamorse);
	printf("\n");
}

// Funcion codigo morse
void morse(char mensaje[])
{
	int i,j;
	char alfM[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
	char alfm[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
	char codigo[37][6] = {{".- "},{"-... "},{"-.-. "},{"-.. "},{". "},{"..-. "},{"--. "},{".... "},{".. "},{".--- "},
	{"-.- "},{".-.. "},{"-- "},{"-. "},{"--- "},{".--. "},{"--.- "},{".-. "},{"... "},{"- "},{"..- "},{"...- "},{".-- "},
	{"-..- "},{"-.-- "},{"--.. "},{"/ "}}; 
	for(i=0;i<mensaje[i];i++)
	{
		for(j=0; j<27;j++)
		{
			if(mensaje[i]==alfM[j])
			{
				printf("%s",codigo[j]);
			}
			else
			{
				if(mensaje[i]==alfm[j])
				{
					printf("%s",codigo[j]);
				}
			}
		}
	}
}