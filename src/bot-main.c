#include <stdio.h>
#include <stdlib.h>
#include "dados.h"
#include "logica.h"
#include "interface.h"
#include "bot.h"

int main (int argc, char *argv[]) {

    if (argc == 3) {
        
       ESTADO *e = inicializar_estado();
       ler(e, argv[1]); 
       jogar_bot(e);
       gravar(e, argv[2]);
       free(e);
       
    }
    return 0;

}
