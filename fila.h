#ifndef FILA_H
#define FILA_H

#include <string>
using namespace std;

// Estrutura que representa um trabalho de impressão
struct TrabalhoImpressao {
    int id_job;            // identificador do job (PID do cliente)
    string nome_arquivo;   // nome do arquivo a ser impresso
    int numero_paginas;    // número de páginas
};

// Estrutura de nó da fila encadeada
struct Nodo {
    TrabalhoImpressao job; // dados do trabalho
    Nodo* prox;            // ponteiro para o próximo nó
};

// Estrutura da fila propriamente dita
struct Fila {
    Nodo* inicio;  // ponteiro para o primeiro elemento
    Nodo* fim;     // ponteiro para o último elemento
};

// Protótipos das funções da fila
void inicializarFila(Fila* f);
bool filaVazia(Fila* f);
void enfileirar(Fila* f, TrabalhoImpressao job);
TrabalhoImpressao desenfileirar(Fila* f);

#endif
