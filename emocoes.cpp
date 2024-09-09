#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
template <class T>
class AnalisadorSentimento {
private:
    string palavras_positivas[4] = { "bem", "feliz", "melhor", "bom" };
    string palavras_negativas[4] = { "depremida", "triste", "cansada", "infeliz" };
    
    // Função para avaliar o sentimento com base na pontuação
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
        string palavras[20];
        int i = 0;
        string palavra;
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

int main() {

string frase = "Estou me sentindo triste e desanimado";
    
    AnalisadorSentimento<string> *analisador = new AnalisadorSentimento<string>(frase);

    return 0;
}
