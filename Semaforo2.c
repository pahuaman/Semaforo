#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*Simulación de un semaforo en C*/

void Verde(void);
void Amarillo(void);
void Rojo(void);

int main()
{
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
	printf("\t\t   _____                  \n");
	printf("\t\t  |     |                 \n");
	printf("\t\t  | *** |                 \n");
	printf("\t\t  |*****|                 \n");
	printf("\t\t  | *** | \t  _________   \n");
	printf("\t\t  | *** | \t |      0  |  \n");
	printf("\t\t  |*****| \t |   / / / |  \n");
	printf("\t\t  | *** | \t |    /    |  \n");
	printf("\t\t  |     | \t |   / |   |  \n");
	printf("\t\t  |     | \t |  /_ |_  |  \n");
	printf("\t\t  |     | \t |_________|  \n");
	printf("\t\t  |     |                 \n");
	printf("\t\t  |     |                 \n");
	printf("\t\t  |     |                 \n");
	printf("\t\t  |_____|                 \n");
	Sleep(6000);
}//Verde

void Amarillo(void)
{
	system("cls");
	system("color 06");
	printf("\t\t   _____                \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     | \t  _______   \n");
	printf("\t\t  |     | \t |   0   |  \n");
	printf("\t\t  |     | \t | | | | |  \n");
	printf("\t\t  |     | \t |   |   |  \n");
	printf("\t\t  | *** | \t |  | |  |  \n");
	printf("\t\t  |*****| \t | _| |_ |  \n");
	printf("\t\t  | *** | \t |_______|  \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |_____|               \n");
	Sleep(3000);
}//Amarillo

void Rojo(void)
{
	system("cls");
	system("color 04");
	printf("\t\t   _____                \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     |               \n");
	printf("\t\t  |     | \t  _______   \n");
	printf("\t\t  |     | \t |   0   |  \n");
	printf("\t\t  |     | \t | | | | |  \n");
	printf("\t\t  |     | \t |   |   |  \n");
	printf("\t\t  |     | \t |  | |  |  \n");
	printf("\t\t  |     | \t | _| |_ |  \n");
	printf("\t\t  |     | \t |_______|  \n");
	printf("\t\t  | *** |               \n");
	printf("\t\t  |*****|               \n");
	printf("\t\t  | *** |               \n");
	printf("\t\t  |_____|               \n");
	Sleep(8000);
}//Rojo
