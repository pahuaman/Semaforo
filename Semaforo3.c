#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*Simulación de un semaforo en C*/

//void Semaforo(void);
void Verde(void);
void Rojo(void);
void Amarillo(void);

int main()
{
	/*Colores:
	Verde: 02
	amarillo: 06 
	Rojo: 04*/
	
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
	int i = 205;
    int a = 201, b = 187;
    int c = 200, d = 188;
    int e = 186;
    
	system("cls");
	system("color 02");
	printf("\n\n\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,b);
	printf("\t\t  %c  *********     *********                              %c\n",e,e);
	printf("\t\t  %c ***********   ***********                             %c\n",e,e);
	printf("\t\t  %c************* *************                            %c\n",e,e);
	printf("\t\t  %c************* *************                            %c\n",e,e);
	printf("\t\t  %c ***********   ***********                             %c\n",e,e);
	printf("\t\t  %c  *********     *********                              %c\n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,d);
	
	printf("\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,i,b);
	printf("\t\t  %c     0  %c \n",e,e);
	printf("\t\t  %c  / / / %c \n",e,e);
	printf("\t\t  %c   /    %c \n",e,e);
	printf("\t\t  %c  / |   %c \n",e,e);
	printf("\t\t  %c /_ |_  %c \n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,i,d);
	
	Sleep(6000);	
}//Verde

void Amarillo(void)
{
	int i = 205;
    int a = 201, b = 187;
    int c = 200, d = 188;
    int e = 186;
    
	system("cls");
	system("color 06");
	printf("\n\n\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,b);
	printf("\t\t  %c                              *********                %c \n",e,e);
	printf("\t\t  %c                             ***********               %c \n",e,e);
	printf("\t\t  %c                            *************              %c \n",e,e);
	printf("\t\t  %c                            *************              %c \n",e,e);
	printf("\t\t  %c                             ***********               %c \n",e,e);
	printf("\t\t  %c                              *********                %c \n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,d);
	
	printf("\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,b);
	printf("\t\t  %c   0   %c  \n",e,e);
	printf("\t\t  %c | | | %c  \n",e,e);
	printf("\t\t  %c   |   %c  \n",e,e);
	printf("\t\t  %c  | |  %c  \n",e,e);
	printf("\t\t  %c _| |_ %c  \n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,d);
	
	Sleep(3000);
}//Amarillo

void Rojo(void)
{
	int i = 205;
    int a = 201, b = 187;
    int c = 200, d = 188;
    int e = 186;
    
	system("cls");
	system("color 04");
	printf("\n\n\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,b);
	printf("\t\t  %c                                            *********  %c \n",e,e);
	printf("\t\t  %c                                           *********** %c \n",e,e);
	printf("\t\t  %c                                          *************%c \n",e,e);
	printf("\t\t  %c                                          *************%c \n",e,e);
	printf("\t\t  %c                                           *********** %c \n",e,e);
	printf("\t\t  %c                                            *********  %c \n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,d);
	
	printf("\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,b);
	printf("\t\t  %c   0   %c  \n",e,e);
	printf("\t\t  %c | | | %c  \n",e,e);
	printf("\t\t  %c   |   %c  \n",e,e);
	printf("\t\t  %c  | |  %c  \n",e,e);
	printf("\t\t  %c _| |_ %c  \n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,d);
	
	Sleep(8000);
}//Rojo

/*void Semaforo(void)
{
    int i = 205;
    int a = 201, b = 187;
    int c = 200, d = 188;
    int e = 186;
    
	system("cls");
	system("color 07");
	printf("\n\n\n");
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,b);
	printf("\t\t  %c  *********     *********     *********     *********  %c \n",e,e);
	printf("\t\t  %c ***********   ***********   ***********   *********** %c \n",e,e);
	printf("\t\t  %c************* ************* ************* *************%c \n",e,e);
	printf("\t\t  %c************* ************* ************* *************%c \n",e,e);
	printf("\t\t  %c ***********   ***********   ***********   *********** %c \n",e,e);
	printf("\t\t  %c  *********     *********     *********     *********  %c \n",e,e);
	printf("\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",c,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,d);
	Sleep(1000);
}//Semaforo*/

