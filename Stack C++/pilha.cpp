#include "pilha.h" 
#include "no.h"
#include <iostream>
#include <cstdlib>
using namespace std;
Pilha::Pilha()
{
      this->topo=NULL;
}

Pilha::~Pilha()
{
	
}

void Pilha::empilha(No *no)

{
     no->anterior = topo;
     this->topo = no;
     
}
 
        
No * Pilha::desempilha()
{
     if (topo==NULL)

     {
            cout << " Not iten " << endl;
       
     }
     
     else{
      
           No *aux = this-> topo;
           this->topo = this->topo->anterior;
           return this->topo;
     }                      
}

void Pilha::mostraPilha()
     
{
     No *aux = this->topo;
     while(aux!=NULL)
     {
          cout << aux->valor << endl;          
          aux = aux->anterior;
     }
      
}

