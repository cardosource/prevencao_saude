#include <iostream>
#include <algorithm>
#include "emocoes.hh"

using namespace std;
typedef std::string msg;
template <typename T>

AnalisadorSentimento<T>::AnalisadorSentimento(T frase) {
    T palavras[20];
    int i = 0;
    T palavra;
    int pontuacao_avaliacao = 0;

    for (int j = 0; j < frase.length(); j++) {
        if (frase[j] == ' ') {
            palavras[i] = palavra;
            i++;
            palavra = "";
        } else {
            palavra += frase[j];
        }
    }
    palavras[i] = palavra;

    for (int k = 0; k <= i; k++) {
        if (find(begin(palavras_positivas), end(palavras_positivas), palavras[k]) != end(palavras_positivas))
            pontuacao_avaliacao += 1;
        else if (find(begin(palavras_negativas), end(palavras_negativas), palavras[k]) != end(palavras_negativas))
            pontuacao_avaliacao -= 1;
    }

    avaliacao(pontuacao_avaliacao);
}

template <typename T>
AnalisadorSentimento<T>::~AnalisadorSentimento() {
    cout << "Fim do projeto\n";
}

template <typename T>
void AnalisadorSentimento<T>::avaliacao(int pontuacao) {
    if (pontuacao > 0)
        cout << "O sentimento da frase é positivo!" << endl;
    else if (pontuacao < 0)
        cout << "O sentimento da frase é negativo!" << endl;
    else
        cout << "O sentimento da frase é neutro." << endl;
}

 
template class AnalisadorSentimento<msg>;

