
//Librerias
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

//Teclas
#define ARRIBA     72
#define IZQUIERDA  75
#define DERECHA    77
#define ABAJO      80
#define ESC        27

using namespace std;

//Variables Globales
int serpiente[800][2];
int n = 1;
int tam = 3;
char tecla;
int x = 10;
int y = 12;
int dir = 3;
int xc = 30;
int yc =15;
int velocidad = 100;
int score = 0;
int m = 1;

//Gotoxy
void gotoxy(int x, int y)
{
     HANDLE hCon;
    
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y = y;
     hCon = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition (hCon,dwPos);
}

//Funcion cuadro
void marco( ) 
     {
     //Lineas Horizontales
     int i;
     for (i=2; i<78; i++)
      {
       gotoxy(i,3); printf("%c",205);
       gotoxy(i,23); printf("%c",205);
      }
     //Lineas Verticales
     for (i=4;i<23;i++)
      {
       gotoxy(2,i); printf("%c",186);
       gotoxy(77,i); printf("%c",186);
      }
      //Esquinas
      gotoxy(2,3);   printf("%c",201);
      gotoxy(2,23);  printf("%c",200);      
      gotoxy(77,3);  printf("%c",187);
      gotoxy(77,23); printf("%c",188);
     }
//Funcion Guardar Posicion
void guardar_posicion()
 {
  serpiente [n][0] = x;
  serpiente [n][1] = y;
  n++;
   if (n == tam)
    n = 1;
 }

//Funcion Pintar_Serpiente
void pintar_serpiente()
 {
  for (int i=1; i<tam; i++)
   {
    gotoxy(serpiente[i][0], serpiente [i][1]);
     printf("*");
   }
  
 }

//Funcion del_serpiente
void del_serpiente()
 {
    gotoxy(serpiente[n][0], serpiente [n][1]);
     printf (" "); 
  
 }

//Funcion Movimiento con teclas
void teclear()
{
if (kbhit())
          {
           tecla = getch();
           switch (tecla)
            {
             case ARRIBA:
                  if(dir!=2)
                   dir=1;
                   break;
             case ABAJO:
                  if (dir!=1)
                   dir=2;
                   break;
             case DERECHA:
                   if(dir!=4)
                    dir=3;
                    break;
             case IZQUIERDA:
                   if(dir!=3)
                    dir=4;
                    break;  
            }        
         } 
}

//Funcion Velocidad
void rapidez ()
 {
  if(score == m*20)
   {
    velocidad-=10;
    m++;
   }
 } 
 
//Comida
void comida ()
 {
  if( x == xc && y == yc)
   {
    xc = (rand()%73)+4;
    yc = (rand()%19)+4;   
    tam++;
    score+=10;
    gotoxy(xc,yc);
    printf("%c",3);
    rapidez();
   }
 }

//Funcion Validacion
bool chingaste ()
 {
  if (y == 3 || y == 23 || x == 2 || x  == 77)
   {
   return false;
   }
   for(int j=tam -1; j>0; j--)
    {
     if (serpiente[j][0] == x && serpiente [j][1] == y)
      return false;
    } 
   return true;    
 }
//Funcion Puntucacion
void puntuacion()
 {
  gotoxy(2,1);
   printf ("Score:   %d", score);
  gotoxy(15,1);
   printf("%c",3);
  gotoxy(25,1);
   printf("Moxxy-Snake");
  
 }
//Funcion_Colores 
void colores ()
 {
    system("title Xuit-Enterprice-Games");
    system("color fd");
 } 
 
//Principal
int main ()
    {
    system ("cls");
    //Poner colores
    colores();
    //Pintar marco
    marco( );
    //Pintar comida
    gotoxy(xc,yc);
    printf("%c",3);
     //Bucle para el juego
     while(tecla != ESC && chingaste())
      {
		  
       del_serpiente();
		  
        guardar_posicion();
		  teclear();
         pintar_serpiente();
		  teclear();
          comida();
		  teclear();
          puntuacion();
		  teclear();
          rapidez();
		  teclear();
         if (dir == 1)
          y--;
		  teclear();
         if (dir == 2)
          y++;
		  teclear();
         if (dir == 3)
          x++;
		  teclear();
         if (dir == 4)
          x--;
		  teclear();
         Sleep(velocidad);
		  teclear();
      }
     system("cls");
     gotoxy (20,14);
     cout <<("Rafael Lopez Ingenieria En Software 1-J");
     gotoxy (35,12);
     cout <<("GAME OVER");
     gotoxy (29,13);
     cout <<("Xuit-Enterprice-Games");
     system ("pause>null");
     return 0; 
    }
