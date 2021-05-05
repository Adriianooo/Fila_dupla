
#include <iostream>
#include "Fila.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    StaticQueue fila = Create();
    cout << "Inserindo  o elemento 'a' na fila pelo InsertBack" << "\n";
    InsertBack(fila, 'a');
    cout << "Inserindo  o elemento 'b' na fila pelo InsertFront" << "\n";
    InsertFront(fila, 'b');
    cout << "Inserindo  o elemento 'c' na fila pelo InsertBack" << "\n";
    InsertBack(fila, 'c');
    cout << "Inserindo  o elemento 'd' na fila pelo InsertFront" << "\n";
    InsertFront(fila, 'd');

    cout << "Quantidade de elementos na fila: " << Count(fila) << "\n";

    cout << "Removendo um elemento pelo RemoveBack" << "\n";
    RemoveBack(fila);
    cout << "Removendo um elemento pelo RemoveFront" << "\n";
    RemoveFront(fila);

    cout << "Último elemento da fila: " << Back(fila) << "\n";
    cout << "Primeiro elemento da fila: " << Front(fila) << "\n";

    return 0;


}

