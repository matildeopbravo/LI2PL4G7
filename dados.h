#ifndef CAMADA_DADOS_H
#define CAMADA_DADOS_H

// Protótipos dos "tipos" e "estruturas"

typedef enum {VAZIO, BRANCA, PRETA} CASA;

typedef struct {
	int coluna;
	int linha;
} COORDENADA;

typedef struct {
	COORDENADA jogador1;
	COORDENADA jogador2;
} JOGADA;

typedef JOGADA JOGADAS[32];

typedef struct {
	CASA tab[8][8];
	COORDENADA ultima_jogada;
	JOGADAS jogadas;
	int num_jogadas;
	int jogador_atual;
} ESTADO;

// Protótipos das funções correspondentes a camada de dados.

void coloca_branca(ESTADO * estado );

ESTADO * inicializar_estado();

obter_jogador_atual(ESTADO *estado);

obter_numero_de_jogadas(ESTADO *estado);CASA;

obter_estado_casa(ESTADO *e, COORDENADA c);


#endif