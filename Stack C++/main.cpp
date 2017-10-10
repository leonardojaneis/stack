#include <cstdlib>
#include <iostream>
#include "no.h"
#include "pilha.h"
using namespace std;
int main(int argc, char *argv[])
{
    Pilha *p = new Pilha();
    p->desempilha();
    p->mostraPilha();
    system("PAUSE");
    return EXIT_SUCCESS;
}
