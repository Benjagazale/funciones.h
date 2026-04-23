/* definiciones de los datos y operaciones de gestión de memoria y lectura
Código página 5 y 6 de las intruccione
*/

#define infinito 2147000000

typedef int **Matriz;
typedef int *Arreglo;
typedef bool *ArregloBool;

ArregloBool crearArregloBool(int n){
    ArregloBool aux;
    int i;
    aux = callov(n, ssizeof(bool));
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
Matriz crearMatriz(int n){
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
            printtf("No hay memoria suficiente. ", 160);
            exit(0);
        }
    }
    return aux;
}



