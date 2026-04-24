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
      int i, j;
      for (i=0; i<n; i++){
         for (j = 0; j < n; j++){
            //Si se encuentra costo > 1 el grafo es valuado
            if (Grafo[i][j] > 1){
               return true;
            }
         }
      }
      return false;
      
     }
     
     tArco arcoMayor(Matriz Grafo, int n){
      tArco mayor;
      int i, j;

      mayor.costo = -1; 
       // Buscar valor maximo en la matriz
      for (i = 0; i < n; i++) {
         for (j = 0; j < n ; j++) {
            if (Grafo[i][j] > mayor.costo){
               //Guardar informacion si se encuentra uno mayor
               mayor.costo = Grafo [i][j];
               mayor.n1 = i;
               mayor.n2 = j;
            }
         }
     }
     return mayor;
   }

     void RecorridosEnProfundidad(Matriz Grafo, int n, int nodo){
      ArregloBool Visitados;
      Visitados = crearArregloBool(n);

      printf("PROFUNDIDAD desde %i: " , nodo);
      PROFUNDIDAD(Grafo, n , Visitados, nodo);
      printf("\n");

      free(Visitados); //Liberar memoria
     }

     void CaminosMinimos(Matriz Grafo, int n, int nodo){
       Arreglo D; //Distancias
       ArregloBool S; // Nodos procesados
       int i, j, v, u, min;

       D = crearArreglo(n);
       S = crearArregloBool(n);

       //Inicializar
       for (i = 0; i < n; i++) {
         S[i] = false;
         D[i] = (Grafo[nodo][i] == 0 && i != nodo) ? infinito : Grafo[nodo][i];

       }
       S[nodo] = true;
       D[nodo] = 0;

       for (i = 1; i < n; i++) {
         min = infinito;
         u = -1;
         // Elegir nodo u con la distancia min que no este en S
         for (v = 0; v < n; v++) {
            if (!S[v] && D[v] < min) {
               min = D[v];
               u = v;
            }
         }
         if (u == -1) break; //No hay mas nodos que se puedan alcanzar
         S[u]= true;

         //Actualizar distancias de vecinos de u
         for (v = 0; v < n; v++) {
            if (!S[v] && Grafo[u][v] != 0) {
               if (D[u] + Grafo[u][v] < D[v]) {
                  D[v] = D[u] + Grafo[u][v];
               }
            }
         }
       }
       printf("Caminos minimos desde nodo %d:\n" , nodo);
       for (i = 0; i < n; i++) {
         if (D[i] == infinito) printf("Hacia %d: No existe camino\n" , i);
         else printf("Hacia %d: costo %d\n" , i, D[i]);
       }

       free(D);
       free(S);
     }

int main() {
   char nombreArchivo[50];
   Matriz Grafo;
   int n, m, tipo, i;
   tArco mayor;

   printf("Ingrese el nombre del archivo: ");
   scanf("%s", nombreArchivo);

   Grafo = leerArchivo(nombreArchivo, &n, &m, &tipo);

   //Grafo valuado o no valuado
   if (esGrafoValuado(Grafo, n)) printf("El grafo es valuado.\n");
   else printf("El grafo no es valuado. \n");

   // Arco mayor
   mayor = arcoMayor(Grafo, n);
   printf("Arco de mayor costo: (%d, %d) con costo %d\n", mayor.n1, mayor.n2, mayor.costo);

   // Recorrido desde cada nodo
   for (i = 0; i < n; i++) {
      RecorridosEnProfundidad(Grafo, n, i);

   }
   // Dijkstra
   CaminosMinimos(Grafo, n, 0);

   system("pause");
   return 0;


}
