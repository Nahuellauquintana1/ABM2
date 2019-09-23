#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesABM.h"
#define T 5

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
    printf("Legajo\t\tNombre\t\tNota");
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
        printf("No hay alumnos Cargados");
    }

}

void mostrarUnAlumno (eAlumno unAlumno)
{
    printf("%d",unAlumno.legajo);
    printf("\n\t\t%s",unAlumno.nombre);
    printf("\n\t\t",unAlumno.nota);
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
    for(i = 0; i < tam; i++)
    {
        if(strcmp(listaDeAlumnos[i].nombre, nombre)== 0)
        {
            mostrarUnAlumno(listaDeAlumnos[i]);
            retorno = 1;
        }
    }
    return retorno;
}
int bajaAlumno (eAlumno listaDeAlumnos[], int tam, int legajo)
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
    char nombreAux[][T]= {"Jose","Pedro","Gaston","Seba","Lucas"};
    int legajoAux[] = {5,7,6,8,1};
    int i;
    for(i = 0; i < tam; i++)
    {
        listaDeAlumnos[i].nota = notaAux;
        listaDeAlumnos[i].legajo = legajoAux;
        strcpy(listaDeAlumnos[i].nombre,nombreAux);
        listaDeAlumnos[i].estado = 0;
    }

}
