#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template <class T>
class AnalisadorSentimento {
private:
    T palavras_positivas[4] = { "bem", "feliz", "melhor", "bom" };
    T palavras_negativas[4] = { "depremida", "triste", "cansada", "infeliz" };
    
    void avaliacao(int pontuacao) {
        if (pontuacao > 0)
            cout << "O sentimento da frase é positivo!" << endl;
        else if (pontuacao < 0)
            cout << "O sentimento da frase é negativo!" << endl;
        else
            cout << "O sentimento da frase é neutro." << endl;
    }

public:
     AnalisadorSentimento(T frase) {
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
    ~AnalisadorSentimento(){

    }
};


int main(int argc, char **argv){
  

new AnalisadorSentimento<string>("Estou me sentindo triste e desanimado");

    return EXIT_SUCCESS;
}
