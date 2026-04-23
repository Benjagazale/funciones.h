# funciones.h
Diseño de algoritmos: Grafos.
Entregable grupal.

Aprendizaje/s esperado/s:
1. Aplicar las estructuras de datos grafo y árbol y sus algoritmos asociados, para el modelamiento y resolución de problemas.
2. Comparar la complejidad computacional de algoritmos diseñados con diferentes estructuras de datos para la selección de la solución más eficiente para un problema. Indicador/es de logro:
1.1. Identifican estructuras de grafos para el análisis de problemas específicos, facilitando su comprensión y abordaje en contextos tecnológicos innovadores.
1.2. Aplican algoritmos sobre grafos para modelar soluciones eficientes a problemas reales permitiendo mejorar procesos o servicios.
2.1. Seleccionan estrategias de búsqueda y ordenamiento para optimizar la eficiencia en el manejo de datos dentro de sistemas dinámicos.
2.2. Comprenden como diseñar algoritmos que incorporan estructuras de datos avanzadas para solucionar problemas específicos en aplicaciones tecnológicas innovadoras, agregando valor a los usuarios finales.


Instrucciones específicas (asociadas a la tarea)
1. El programa a desarrollar debe estructurarse con las funciones solicitadas, en lenguaje C.
2. Debe invocar a sus funciones mediante un main o programa principal, siguiendo las instrucciones.
3. Todas las funciones desarrolladas y el main deben estar explicados a través de comentarios en C.
4. Para desarrollar las funciones pueden usar cualquier IDE para el lenguaje C, como replit.com, Clion (https://www.jetbrains.com/es-es/clion/).
5. Para entregar esta actividad deben haberse inscrito en un grupo en Canvas.
6. Su código debe estar correctamente indentado (uso de sangrías para cada sub-bloque de instrucciones), esto incluye el correcto alineamiento de las llaves (“{” y “}”) que delimitan tales bloques.
7. Deben usar identificadores representativos para sus constantes, variables, parámetros de entrada y funciones.
8. Las variables locales a cada función deben definirlas al principio de ella, no entre las instrucciones.


**Caso:**

Nuevamente el centro de desarrollo, requiere seguir demostrando las características de los grafos
dirigidos y de los grafos NO dirigidos. Para ello, solicita desarrollar las siguientes funcionalidades:
1. Analizar si un grafo es valuado.
2. Imprimir el arco de mayor costo y su costo.
3. Imprimir el recorrido en profundidad desde cada nodo.
4. Imprimir los caminos de costo mínimo desde un nodo (usando Dijkstra) a todos los otros. Si no
existe un camino, la función debe imprimir un mensaje.

Para analizar el comportamiento de los grafos, use representación con matrices de la siguiente forma:
En la primera línea del archivo de entrada aparecerán 3 números enteros:
El primero indicará el número de nodos que posee el grafo (variable llamada n en el código
fuente).
El segundo corresponderá al número de arcos (variable llamada m en el código fuente).
El tercero (variable llamada tipo en el código fuente), representará al tipo de grafo: si se trata de
un grafo dirigido contendrá un valor 1, y si es no dirigido, un valor 2.





