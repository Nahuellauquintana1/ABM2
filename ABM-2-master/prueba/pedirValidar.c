#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "pedirValidar.h"
#include "funcionesABM.h"


int devuelveInt (char mensaje[])
{
    int auxiliarInt, auxScanf;
    printf("%s", mensaje);
    auxScanf = scanf("%d", &auxiliarInt);
    while(auxScanf != 0)
    {
        printf("Ingrese un Numero valido");
        fflush(stdin);
        scanf("%d", &auxiliarInt);
    }
    return auxiliarInt;
}

char devuelveChar (char mensaje[])
{
    char auxiliarChar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%s", &auxiliarChar);
    return auxiliarChar;
}

float devuelveFloat(char mensaje[])
{
    float auxiliarFloat;
    printf("%s", mensaje);
    scanf("%f", &auxiliarFloat);
    return auxiliarFloat;
}





void validacionMayuscula(char caracter[])
{
    int i;
    int largo;
    caracter[0]=toupper(caracter[0]);
    largo=strlen(caracter);
    for(i=0;i<largo;i++)
    {
        if(caracter[i]==' ')
        {
            i=i+1;
            caracter[i]=toupper(caracter[i]);
        }
    }
    return caracter;
}



int validacionNumero (char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        return 0;
        i++;
    }
    return 1;
}




int validacionTelefono(char str[])
{
    int i=0;
    int contadorGuiones = 0;
    while (str[i] != '\0')
    {
        if ((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
        if (str[i] == '-')
            contadorGuiones++;
        i++;
    }
    if (contadorGuiones==1)
        return 1;
        return 0;
}



int validacionSoloCaracteres(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        return 0;
        i++;
    }
    return 1;
}



int validacionAlfaNumerica(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
        return 0;
        i++;
    }
    return 1;
}



void pideString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s", mensaje);
    gets(input);
}



int pideStringLetras(char mensaje[], char input[])
{
    char auxiliar[256];
    pideString(mensaje, auxiliar);
    if(validacionSoloCaracteres(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}



int pideStringNumeros(char mensaje[], char input[])
{
    char auxiliar[256];
    pideString(mensaje, auxiliar);
    if(validacionNumero(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}



int pideAlfaNumerico(char mensaje[], char input[])
{
    char auxiliar[256];
    pideString(mensaje, auxiliar);
    if(validacionAlfaNumerica(auxiliar))
    {
        strcpy(input,auxiliar);
        return 1;
    }
    return 0;
}
