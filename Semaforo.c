#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*Simulación de un semaforo en C*/

void Verde(void);
void Rojo(void);
void Amarillo(void);

int main()
{
	/* Colores:
	   Verde: 02
	   amarillo: 06 
	   Rojo: 04 */
	
	do{
		
		Verde();
		Amarillo();
		Rojo();
		
	}while(!kbhit());
	
	system("pause");
	return 0;
	
}//main

void Verde(void)
{
	system("cls");
	system("color 02");
	printf("\n\n\n");
	printf("\t\t    *********     *********    \n");
	printf("\t\t   ***********   ***********   \n");
	printf("\t\t  ************* *************  \n");
	printf("\t\t  ************* *************  \n");
	printf("\t\t   ***********   ***********   \n");
	printf("\t\t    *********     *********    \n");
	
	printf("\n\n");
	printf("\t\t\t  _________   \n");
	printf("\t\t\t |      0  |  \n");
	printf("\t\t\t |   / / / |  \n");
	printf("\t\t\t |    /    |  \n");
	printf("\t\t\t |   / |   |  \n");
	printf("\t\t\t |  /_ |_  |  \n");
	printf("\t\t\t |_________|  \n");
	Sleep(6000);
	
}//Verde3

void Amarillo(void)
{
	system("cls");
	system("color 06");
	printf("\n\n\n");
	printf("\t\t\t\t\t    *********    \n");
	printf("\t\t\t\t\t   ***********   \n");
	printf("\t\t\t\t\t  *************  \n");
	printf("\t\t\t\t\t  *************  \n");
	printf("\t\t\t\t\t   ***********   \n");
	printf("\t\t\t\t\t    *********    \n");
	
	printf("\n\n");
	printf("\t\t\t\t\t     _______   \n");
	printf("\t\t\t\t\t    |   0   |  \n");
	printf("\t\t\t\t\t    | | | | |  \n");
	printf("\t\t\t\t\t    |   |   |  \n");
	printf("\t\t\t\t\t    |  | |  |  \n");
	printf("\t\t\t\t\t    | _| |_ |  \n");
	printf("\t\t\t\t\t    |_______|  \n");
	Sleep(3000);
	
}//Amarillo

void Rojo(void)
{
	system("cls");
	system("color 04");
	printf("\n\n\n");
	printf("\t\t\t\t\t\t\t    *********    \n");
	printf("\t\t\t\t\t\t\t   ***********   \n");
	printf("\t\t\t\t\t\t\t  *************  \n");
	printf("\t\t\t\t\t\t\t  *************  \n");
	printf("\t\t\t\t\t\t\t   ***********   \n");
	printf("\t\t\t\t\t\t\t    *********    \n");
	
	printf("\n\n");
	printf("\t\t\t\t\t\t\t     _______   \n");
	printf("\t\t\t\t\t\t\t    |   0   |  \n");
	printf("\t\t\t\t\t\t\t    | | | | |  \n");
	printf("\t\t\t\t\t\t\t    |   |   |  \n");
	printf("\t\t\t\t\t\t\t    |  | |  |  \n");
	printf("\t\t\t\t\t\t\t    | _| |_ |  \n");
	printf("\t\t\t\t\t\t\t    |_______|  \n");
	Sleep(8000);
	
}//Semaforo
