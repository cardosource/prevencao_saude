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
- `frase`: a frase cujo sentimento será avaliado
- `palavras`: um array de strings que armazena as palavras da frase, após a separação
- `pontuacao_avaliacao`: um inteiro que armazena a pontuação final da frase, baseado nas palavras positivas e negativas encontradas

## Funções
- `avaliacao(int pontuacao)`: Essa função é chamada ao final do programa e imprime uma mensagem no console indicando se a frase é positiva, negativa ou neutra, baseado na pontuação passada como parâmetro.
- `main()`: é a função principal do código e contém a lógica principal para analisar o sentimento da frase. Ela funciona da seguinte maneira:
    1. A frase é armazenada na variável `frase`
    2. Usando um loop, as palavras da frase são separadas e armazenadas no array `palavras`
    3. Outro loop é usado para verificar se cada palavra do array `palavras` está na lista de palavras positivas ou negativas. Se estiver, a pontuação é ajustada de acordo.
    4. A função `avaliacao()` é chamada com a pontuação final como parâmetro.
    
   
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
