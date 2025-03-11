/*

Tenemos n ≥ 2 datos de tipo real almacenados en un vector y queremos encontrar,
entre todos los posibles pares de datos, un par tal que la diferencia entre los
dos valores del par sea mínima (por ejemplo, para emparejar a los dos jugadores
que tienen la puntuación más similar en un videojuego).

 ¿Cómo resolverías el problema, y qué coste tendría, sin ordenar el vector?
 ¿Sería mejor ordenar primero el vector con un algoritmo de coste O(n2) y aprovechar después esa ordenación?
 ¿Sería mejor ordenarlo con un algoritmo de coste O(n log n) y aprovechar después esa ordenación?
 ¿Qué harías si no fuese posible modificar el vector y cómo afectaría eso al coste temporal?

    4, 20, 12, 16, 28, 3,

*/

#include <iostream>

using namespace std;

int vector[6] = {4, 20, 12, 16, 28, 3};

int possibleFirstNumber         = 0;
int possibleSecondNumber        = 0;
int currentLowestSubtraction    = 0;

int main()
{
    cout << "Hello World\n";
    int arraySize = sizeof(vector) / sizeof(vector[0]);
    cout << arraySize << "\n";

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize ; j++)
        {
            if (j == j)
                continue;
            else
            {
                if (j - i == currentLowestSubtraction)
                {

                }
            }
        }
    }

    cout << currentLowestSubtraction << "\n";
    cout << "Finishing program\n";

    return 0;
}