#ifndef PILHA_H
#define PILHA_H
#include "no.h"
class Pilha
{
	public:
           No *topo;
           void empilha ( No *no);           
           No * desempilha ();
           void mostraPilha();
           Pilha();
           ~Pilha();
};
#endif
