/* definiciones de los datos y operaciones de gestión de memoria y lectura
Código página 5 y 6 de las intrucciones
Estas son las funciones propuestas por el profesor que van en el archivo funciones.h
se debe importar en el archivo principal
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define infinito 2147000000

typedef int **Matriz;
typedef int *Arreglo;
typedef bool *ArregloBool;

struct arco {
    int n1;
    int n2;
    int costo;
};

typedef struct arco tArco;

ArregloBool crearArregloBool(int n){
    ArregloBool aux;
    int i;
    aux = calloc(n, sizeof(bool));
    if(aux == NULL){
        printf("No hay memoria suficiente. ", 160);
        exit(0);
    }
    return aux;
}
Arreglo crearArreglo(int n){
    Arreglo aux;
    int i;

    aux = calloc(n,sizeof(int));
    if (aux == NULL)
    {
        printf("No hay memoria suficiente. ", 160);
        exit(0);
    }
    return aux;
}
Matriz creaMatriz(int n){
    Matriz aux;
    int i;

    aux = calloc(n, sizeof(int *));
    if (aux == NULL)
    {
        printf("No hay memoria suficiente. ", 160);
        exit(0);
    }
    for (i=0; i<n; i ++)
    {
        aux[i] = calloc(n,sizeof(int));
        if(aux[i] == NULL)
        {
            printf("No hay memoria suficiente. ", 160);
            exit(0);
        }
    }
    return aux;
}

    Matriz leerArchivo(char nomArchivo[20], int *pn, int *pm,int *ptipo)
    {
        FILE *archivo;
        Matriz Grafo;
        int n, m, tipo, i, nodo1, nodo2, costo;
        archivo = fopen(nomArchivo, "r");
        if (archivo == NULL)
        {
            printf("Archivo no encontrado. ", 160);
            exit(0); }
        fscanf(archivo, "%i", &n);
        fscanf(archivo, "%i", &m);
        fscanf(archivo, "%i", &tipo);
        Grafo = creaMatriz(n);
        for(i=1;i<=m;i++)
        {
            fscanf(archivo, "%i", &nodo1);
            fscanf(archivo, "%i", &nodo2);
            fscanf(archivo, "%i", &costo);
            Grafo[nodo1][nodo2] = costo;
            if (tipo ==2)
                Grafo[nodo2][nodo1]= costo; }
        fclose(archivo);
        *pn = n;
        *pm = m;
        *ptipo = tipo;
        return Grafo;
    }

    void PROFUNDIDAD(Matriz Grafo, int n, ArregloBool Visitados, int nodo){
        int j;
        Visitados[nodo] = true;
        printf("%d", nodo);
        // Si hay camino y nodo j no ha sido visitado
        for (j = 0 ; j < n; j++) { 
            if (Grafo [nodo][j]!= 0 && !Visitados[j]){
                PROFUNDIDAD(Grafo, n, Visitados, j);
            }
        }
    }

