# Analise de indicios de depressão em crianças (modelo simples)


Este código é uma implementação simples de análise de sentimento, onde é dada uma frase e o sentimento dela é determinado como positivo, negativo ou neutro. A lógica do código baseia-se em comparar as palavras da frase com uma lista pré-definida de palavras positivas e outra lista pré-definida de palavras negativas.

## Tecnologias utilizadas
- Linguagem C++
- Biblioteca `iostream` para imprimir mensagens no console
- Biblioteca `string` para trabalhar com strings
- Biblioteca `algorithm` para usar a função `find()`

## Variáveis
- `palavras_positivas`: uma lista de strings que contém palavras consideradas positivas
- `palavras_negativas`: uma lista de strings que contém palavras consideradas negativas
- `palavras`: um array de strings que armazena as palavras da frase, após a separação
- `pontuacao_avaliacao`: um inteiro que armazena a pontuação final da frase, baseado nas palavras positivas e negativas encontradas

## Classe AnalisadorSentimento
A classe AnalisadorSentimento é uma classe genérica (template) que processa frases e analisa o sentimento delas, baseando-se em listas de palavras positivas e negativas.

- Estrutura da Classe

`Template`:

A classe usa templates (indicados por template <class T>) para permitir que ela funcione com diferentes tipos de dados. No exemplo dado, o tipo T é tratado como std::string. Isso permite que a classe seja flexível e trabalhe com tipos diferentes sem precisar ser reescrita.

`Atributos Privados`:

palavras_positivas: Um array que contém palavras associadas a sentimentos positivos, como "bem", "feliz", "melhor", e "bom".
palavras_negativas: Um array que contém palavras associadas a sentimentos negativos, como "depremida", "triste", "cansada", e "infeliz".
Ambos arrays são usados para verificar se as palavras da frase pertencem a uma dessas listas, o que vai influenciar a pontuação final.


Ambos os arrays são usados para verificar se as palavras da frase pertencem a uma dessas listas, o que vai influenciar a pontuação final.

`Construtor (AnalisadorSentimento(T frase))`

Responsável por inicializar a análise da frase passada como parâmetro.


   
   ## Considerações finais
Este código é apenas um exemplo básico de como a análise de sentimento pode ser implementada e pode ser melhorado de várias maneiras, como adicionar mais palavras às listas, melhorar a precisão da análise, adicionar suporte para idiomas diferentes, entre outros. Além disdisso, é importante notar que a análise de sentimento é uma tarefa complexa e pode ser afetada por vários fatores, como o contexto e a sintaxe da frase. Portanto, é importante sempre testar e ajustar o código para garantir a precisão da análise.


## Melhorias futuras
Adicionar mais palavras às listas de palavras positivas e negativas para aumentar a precisão da análise.
Adicionar suporte para idiomas diferentes, incluindo a detecção automática do idioma da frase.
Adicionar uma escala de sentimento, como "muito positivo", "moderadamente positivo", "neutro", "moderadamente negativo" e "muito negativo", ao invés de simplesmente "positivo", "negativo" e "neutro".
Incorporar outros tipos de análise, como análise de emoção ou análise de subjetividade.
Como é possível notar, este é apenas um exemplo inicial de como é possível desenvolver uma análise de sentimento e existem diversas formas de melhorar e aprimorar essa análise.

_(Algoritimo de identificação de indicio de depressão em frase)_

_Base de inspiração_ ,  Apesar de existir semelhanças com a depressão em adultos, o diagnóstico é mais demorado pois os pequenos têm dificuldade de externar suas emoções. Dados da Organização Mundial da Saúde (OMS) revelam que há atualmente 350 milhões de pessoas em todo mundo com depressão e cerca de 1% a 2% dos atingidos são 
[crianças](https://auniao.pb.gov.br/noticias/caderno_paraiba/depressao-infantil-diagnostico-e-mais-demorado#:~:text=Apesar%20de%20existir%20semelhan%C3%A7as%20com%20a%20depress%C3%A3o%20em%20adultos%2C%20o,2%25%20dos%20atingidos%20s%C3%A3o%20crian%C3%A7as).




![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) 
