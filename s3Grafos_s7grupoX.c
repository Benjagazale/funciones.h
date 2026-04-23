/* 
Integrantes: 
- Miqueas Möhlinger
- Benjamin Gazale
- Valentina Gomez
Curso: APTC104
Evaluacion: Sumativa 3 - Grafos */

//Importamos las librerias
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funciones.h"


    
     bool esGrafoValuado(Matriz Grafo, int n){
        /*Recibe una Matriz Grafo, y un entero n,
        retorna Verdadero o falso al evaaluar el grafo*/
     }
     
     tArco arcoMayor(Matriz Grafo, int n){
        /*
        Recibe una Matriz Grafo, un entero n y nodo, retorna el arco mayor. 
        (¿por qué no aparece como parámetro el nodo, se habrá equivocado el profe?)
        **Esta struct definida en tu programa podría servirte
        struct arco
        {
            int n1;
            int n2;
            int costo;
        };
        typedef struct arco tArco
        */
     }
     void RecorridosEnProfundidad(Matriz Grafo, int n, int nodo){
        /*
        Recive una matriz grafo, y dos enteros n y nodo, e imprime el recorrido en profundidad,
        para ello requiere el algoritmo en profundidad para todos los nodos visitados según el 
        siguiente ejemplo:

        ArregloBool Visitados;
        Visitados = crearArregloBool(n);
        printf("PROFUNDIDAD desde %i: ", nodo);
        PROFUNDIDAD(Grafo, n, Visitados, nodo);
        free(Visitados);
        */
     }
     void CaminosMinimos(Matriz Grafo, int n, int nodo){
        /*
        Recibe una matriz Grafo, y dos enteros n y nodo, e imprimeel recorrido DIJKSTRTA
        desde lógica. No es necesario crear las funciones analisisNoDirigido() y analisisDirigido().

        Para probar su programa cree un archivo con datos para un nodo valuado NO dirigido y
        para un graado valuado dirigido
        */
     }

int main() {

}
