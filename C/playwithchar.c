#include <stdio.h>

/*JUGANDO UN RATO CON CHAR*/

int main(int argc, char const *argv[])
{
	char word[]= "Ray Mondragon";
	//No colocar cantidad de espacio en el a si definimos el a y se coloca entre " COMILLAS "
	printf("\n%s\n",word);

	char word2[20];
	gets(word2); //Necesario usar gets para varios string (2 o más palabras)
	printf("%s\n",word2);

	char word3=64;
	printf("\n%i\n",word3); //Imprime: 64
	printf("%c\n",word3); //Imprime: @

	char word4='@'; 
	//Al estar hablando de un caracter y querer definirlo se coloca entre ' COMILLA CHICA '
	printf("\n%i\n",word4); //Imprime: 64
	printf("%c\n",word4); //Imprime: @

	//Podríamos usar getchar para sustituir el scanf cuando hablamos de un caracter
	char word5;
	word5=getchar(); //Necesario utilizar getchar() igualándolo a la variable asignada
	printf("\n%c\n",word5); //Imprime el caracter dado
	return 0;
}