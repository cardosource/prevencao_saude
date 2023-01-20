#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string palavras_positivas[4] ={
"bem",    "feliz",
"melhor", "bom"
};

string palavras_negativas[4]={
"depremida", "triste",
"cansada"  , "infeliz"
};


void avaliacao(int pontuacao){
     // pontuação positivo
  if (pontuacao > 0)
		cout << "O sentimento da frase é positivo!" << endl;
	// pontuação negativa
	else if (pontuacao < 0)
		cout << "O sentimento da frase é negativo!" << endl;
	//contrário
	else
		cout << "O sentimento da frase é neutro." << endl;
 }

int main(){	
        string frase = "Estou me sentindo triste e desanimado";

	string palavras[20];
	int i = 0;
	string palavra;
	int pontuacao_avaliacao = 0;
	
	for(int j=0; j<frase.length(); j++){
		if(frase[j] == ' '){
			palavras[i] = palavra;
			i++;
			palavra = "";
		}
		else{
			palavra+=frase[j];
		}
	}
	palavras[i] = palavra;
	

	for (int i = 0; i < 20; i++)	{	
		if (find(begin(palavras_positivas), end(palavras_positivas), palavras[i]) != end(palavras_positivas))
			pontuacao_avaliacao += 1;
		//Verifique se a palavra está no conjunto de palavras negativas
		else if (find(begin(palavras_negativas), end(palavras_negativas), palavras[i]) != end(palavras_negativas))
			pontuacao_avaliacao -= 1;
	}
	
         avaliacao(pontuacao_avaliacao);

	return 0;
}
