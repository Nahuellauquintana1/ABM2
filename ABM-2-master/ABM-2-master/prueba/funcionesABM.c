#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcionesABM.h"

void inicializarAlumnos(eAlumno listaDeAlumnos[],int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        listaDeAlumnos[i].estado = 1;
    }
}

void listarAlumnos (eAlumno listaDeAlumnos[], int tam)
{
    int i;
    int flagEstado = 1;
    printf("Legajo\t\tNombre\t\tNota\n");
    for(i = 0; i < tam; i++)
    {
        if(listaDeAlumnos[i].estado == 0)
        {
            flagEstado = 0;
            mostrarUnAlumno(listaDeAlumnos[i]);
        }

    }
    if(flagEstado == 1)
    {
        printf("\nNo hay alumnos Cargados\n");
    }

}

void mostrarUnAlumno (eAlumno unAlumno)
{
    printf("%d",unAlumno.legajo);
    printf("\t\t%s",unAlumno.nombre);
    printf("\t\t%d\n",unAlumno.nota);
}

int pedirIndiceLibre(eAlumno listaDeAlumnos[], int tam)
{
    int i;
    for ( i = 0; i < tam ; i++)
    {
        if(listaDeAlumnos[i].estado == 1)
        {
            return i;
        }
    }
    return -1;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);
    return opcion;
}

int buscarAlumno(eAlumno listaDeAlumnos[], int tam, char nombre[])
{
    int i;
    int retorno = 0;
    char auxNombreToLower[50];
    for(i = 0; i < tam; i++)
    {
        strcpy(auxNombreToLower, listaDeAlumnos[i].nombre);
        strlwr(auxNombreToLower);
        if(strcmp(auxNombreToLower, nombre)== 0 && listaDeAlumnos[i].estado == 0)
        {
            mostrarUnAlumno(listaDeAlumnos[i]);
            retorno = 1;
        }
    }
    return retorno;
}
int bajaAlumno(eAlumno listaDeAlumnos[], int tam, int legajo)
{
    int i;
    int retorno = 0; // Si existe Legajo 1 ---- Si no Existe Legajo 0
    for(i = 0; i  < tam ; i++)
    {

        if(listaDeAlumnos[i].legajo == legajo)
        {
            listaDeAlumnos[i].estado = 1;
            retorno = 1;
        }
    }
        return retorno;
}
void hardCodearDatos(eAlumno listaDeAlumnos[], int tam)
{
    int notaAux[] ={2,4,6,8,10};
    char nombreAux[][50]= {"Jose","Pedro","Gaston","Seba","Lucas"};
    int legajoAux[] = {5,7,6,8,1};
    int i;
    for(i = 0; i < tam; i++)
    {
        listaDeAlumnos[i].nota = notaAux[i];
        listaDeAlumnos[i].legajo = legajoAux[i];
        strcpy(listaDeAlumnos[i].nombre,nombreAux[i]);
        listaDeAlumnos[i].estado = 0;
    }

}

int cargarNuevoCosa(eAlumno lista[], int tam)
{
    int i;
    i = pedirIndiceLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        lista[i].nombre[0]=toupper(lista[i].nombre[0]);
        printf("Ingrese  Nota: ");
        scanf("%d", &lista[i].nota);
        lista[i].estado = 0;

    }
    else
    {
        return -1;
    }

}


int modificarCosa(eAlumno listaDeAlumnos[],int tam, int legajo, int nota)
{
    ///W.I.P
    int i;
    int retorno = 0; /// Si modifico retorna 1 --- si no 0

    for(i = 0; i < tam ; i ++)
    {
        if(listaDeAlumnos[i].legajo == legajo)
        {
           listaDeAlumnos[i].nota = nota;
            retorno = 1;
        }
    }
    return retorno;
}

int buscarAlumnoPorLegajo(eAlumno listaDeAlumnos[], int tam, int legajo)
{
    int i;
    int retorno = 0; // Si existe Legajo 1 ---- Si no Existe Legajo 0
    for(i = 0; i  < tam ; i++)
    {

        if(listaDeAlumnos[i].legajo == legajo)
        {
            retorno = 1;
        }
    }
        return retorno;
}
