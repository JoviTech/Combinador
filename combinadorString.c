#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max_palavra 30 //tamanaho da palavra
#define max_linhas 100 //max de linhas 

int main(){

    int contador=0, num_casos, i;
    char matriz[max_linhas][2][max_palavra];
    char combinada[max_linhas][1][2*max_palavra];

    //char str1[MAX], str2[MAX], combinador[2*MAX];

    scanf("%d", &num_casos);

    //recebendo duas palavras por linha da matriz
    for(i=0; i<num_casos; i++){
        scanf("%s %s", matriz[i][0], matriz[i][1]);
    }
    for(i=0;i<num_casos;i++){

    }
    //acesssar cada item da matriz ex:matriz[0][0] e fazer a combinação
    //criar outra matriz de combinação com 3 dimensões e uma palavra
    //salvar a palavra combinada nessa nova matriz.

    
    for(i=0;i<num_casos;i++){
        //descobrir seus tamanahos
        //remover o enter quando houver
        int tam = strlen(matriz[i][0]); //ler o tamanho da string e salva em tam
        if(str1[tam-1] == '\n'){
        str1[tam-1] = '\0'; // se era "123\n\0", agora ficou "123\0"
        tam--; //ajustando para o tamanho real da varivael tirando o "\0"
        }

        //remover o enter quando houver
        int tam2 = strlen(matriz[i][1]); //ler o tamanho da string e salva em tam
        if(str2[tam2-1] == '\n'){
        str2[tam2-1] = '\0'; // se era "123\n\0", agora ficou "123\0"
        tam2--; //ajustando para o tamanho real da varivael tirando o "\0"
        }
    }
    

    int i=0;
    contador=0;
    //pegar um indice de cada string ate acabar a string menor e adicionar em outra variavel
    if(tam>tam2){
        for(i=0;i<tam2;i++){
            combinador[contador++]=str1[i]; //incremento p�s-fixado, primeiro � usado o valor atual de "contador" e depois incrementado +1;
            combinador[contador++]=str2[i];
        }
        //adicionar o restante da string maior no final da combina��o
        while(i<tam){
            combinador[contador++]=str1[i++];
        }
    }
    if(tam2>tam){
        for(i=0;i<tam;i++){
            combinador[contador++]=str1[i];
            combinador[contador++]=str2[i];
        }
        //adicionar o restante da string maior no final da combina��o
        while(i<tam2){
            combinador[contador++]=str2[i++];
        }

    }
    combinador[contador] = '\0'; // Terminar a string combinada
    printf("%s\n", combinador);
}
