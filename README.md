Jogo de Adivinhação em C
Este é um jogo de adivinhação simples desenvolvido em linguagem C, no qual o jogador tenta descobrir um número secreto gerado aleatoriamente pela máquina.
O jogo inclui sistema de pontuação, escolha de nível de dificuldade e uma interface amigável com ASCII Art.


Funcionalidades:
- Geração calculada do número secreto entre 0 e 99.
- Sistema de Esforço baseado no nível de dificuldade escolhido:
(1) Fácil: 20 tentativas
(2) Médio: 15 tentativas
(3) Dificuldade: 6 tentativas
- Pontuação dinâmica: quanto mais próximo do número secreto, menor a perda de pontos.
- Interface divertida com ASCII Art.
- Mensagens personalizadas de acordo com o desempenho do jogador.


Tecnologias Utilizadas:
- Linguagem C
- Bibliotecas:
    - stdio.h(entrada e saída padrão)
    - stdlib.h(funções utilitárias, como rand()e abs())
    - time.h(para gerar aleatoriedade com base no tempo)


Como Rodar:
- Compile o código com um compilador C (como o GCC):
    gcc jogo_adivinhacao.c -o jogo
- Execute o programa:
  ./jogo

    
Lógica do Jogo:
- O jogo sorteia um número secreto de 0 a 99.
- O jogador deve adivinhar esse número dentro do número de tentativas permitido.
- Cada erro desconta pontos com base na diferença entre o chute e o número secreto.

Observações:
- Não é permitido chutar números negativos.
- O jogo informa se o chute foi maior ou menor que o número secreto.
- Ao final, o jogador recebe seu total de pontos e o número de tentativas utilizadas.
  
