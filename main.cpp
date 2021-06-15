#include "Lista.h"

int main() {
    Lista* pL = new Lista();

    pL->agregarAlFinal(1);
    pL->agregarAlFinal(2);
    pL->agregarAlFinal(3);;
    pL->agregarAlFinal(4);;
    pL->agregarAlFinal(5);;
    pL->agregarAlFinal(6);;
    pL->agregarAlFinal(7);;


    cout<< pL->toString();// imprime al revez
    cout<<pL->borrarEspecifico(5);
    cout<< pL->toString();// imprime al revez
    delete pL;






    return 0;
}
