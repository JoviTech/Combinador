#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max_palavra 30 //tamanaho da palavra
#define max_linhas 100 //max de linhas 

int main(){

    int contador=0, num_casos, i;
    char matriz[max_linhas][2][max_palavra];
    char combinada[max_linhas][2*max_palavra];

    //char str1[MAX], str2[MAX], combinador[2*MAX];

    scanf("%d", &num_casos);

    //recebendo duas palavras por linha da matriz
    for(i=0; i<num_casos; i++){
        scanf("%s %s", matriz[i][0], matriz[i][1]);
    }

    //acesssar cada item da matriz ex:matriz[0][0] e fazer a combinação
    //criar outra matriz de combinação com 3 dimensões e uma palavra
    //salvar a palavra combinada nessa nova matriz.

    
    for(i=0;i<num_casos;i++){
        //descobrir seus tamanahos
        //remover o enter quando houver
        int tam = strlen(matriz[i][0]); //ler o tamanho da string e salva em tam


        //remover o enter quando houver
        int tam2 = strlen(matriz[i][1]); //ler o tamanho da string e salva em tam

        int j;
        contador=0;
        //pegar um indice de cada string ate acabar a string menor e adicionar em outra variavel
        if(tam>tam2){
            for(j=0;j<tam2;j++){
                combinada[i][contador++]=matriz[i][0][j]; //incremento p�s-fixado, primeiro � usado o valor atual de "contador" e depois incrementado +1;
                combinada[i][contador++]=matriz[i][1][j];
            }
            //adicionar o restante da string maior no final da combina��o
            while(j<tam){
                combinada[i][contador++]=matriz[i][0][j++];
            }
        }
        if(tam2>tam){
            for(j=0;j<tam;j++){
                combinada[i][contador++]=matriz[i][0][j];
                combinada[i][contador++]=matriz[i][1][j];
            }
            //adicionar o restante da string maior no final da combina��o
            while(j<tam2){
                combinada[i][contador++]=matriz[i][1][j++];
            }

        }

        combinada[i][contador] = '\0'; // Terminar a string combinada
        printf("%s\n", combinada[i]);

    }
    
}
