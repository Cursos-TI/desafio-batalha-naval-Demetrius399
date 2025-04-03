#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    // Definindo constates
    #define TAM 10
    #define NAVIOS 3
   

int main() {
  //Definindo as Variaveis
  char tabuleiro[TAM][TAM]; //Tabuleiro de 10x10
  int i, j;

  printf("***************************************\n");  
  printf("********TABULEIRO BATALHA NAVAL********\n");
  printf("***************************************\n"); 


  //Inicializando o tabulheiro com '0'(representando água)
  for ( i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
       tabuleiro[i][j] = '0';
    }
  }

  //Posicionar o navio horizontalmente
  int linhaD = 1, colunaD = 5;
  for ( i = 0; i < NAVIOS; i++) { 
    tabuleiro[linhaD][colunaD + i] ='3';


    }
    //Posicionar o navio verticalmente
    int linhaB = 4, colunaB = 6;
    for (i = 0; i< NAVIOS; i++) {
      tabuleiro[linhaB + i][colunaB] ='3';
    }
    //Posicionar o navio na diagonal principal (\)
    int linhaA = 1,colunaA = 1;//Linha onde o navio será posicionado.
    for (i = 0; i< NAVIOS; i++) {
      tabuleiro[linhaA + i][colunaA + i] = '3';
    }
    //Posicionar o navio na diagonal secundaria(/)
    int linhaC = 6, colunaC = 8;
    for ( i = 0; i < NAVIOS; i++) {
      tabuleiro[linhaC + i][colunaC - i] = '3';
    }
    
     printf("   "); 
    
    for (j =0; j < TAM; j++) {
    
      printf("%c ", 'A' + j);

    }

    printf("\n");

    //Exibe o tabuleiro com indices de linha
    for (i = 0; i < TAM; i++) {
      printf("%2d ",i);
      for (j =0; j < TAM; j++) {
        printf("%c ",tabuleiro[i][j]);

      }
      printf("\n");    
   
  }
  
    
    return 0; 

  }
