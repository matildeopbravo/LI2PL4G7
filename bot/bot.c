#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dados.h"
#include "interface.h"
#include "logica.h"
#include "bot.h"
   
void jogar_bot(ESTADO * e) {
   
    COORDENADA cord;  // jogada que vai ser efetuada
    COORDENADA cord2; //jogada simulada a partir de nossa jogada simulada
    ESTADO estado_copia = *e;
        
    cord = estrategia_paridade(e);

   if (jogar(e,cord) != 2) {  //Verifica se já dá para ganhar com a paridade  

        *e = estado_copia;  // recupera o estado porque na jogada não seria vencedora
        cord = estrategia_floodfill(e);

        if ((cord.linha != 3 || cord.coluna != 4){  // se for possível chegar à casa vencedora
    /*Processo de simulação sobre o que acontecerá depois de nossa possível jogada*/
            jogar(e,cord); // joga na coordenada dada pela floodfill
            cord2 = estrategia_paridade(e); // obtem jogada a seguir a essa com paridade
         }
        if (obter_estado_casa(e,cord) != UM && obter_estado_casa(e,cord) != DOIS{
             if ((cord.linha == 3 && cord.coluna == 4) || (jogar(e,cord2) == 2)) {
                cord = estrategia_paridade(&estado_copia);     
             }
         }
    }
    *e = estado_copia;
    jogar(e,cord);
    
}
