# Fisiogame - Código do Hardware

## Especificações do Hardware
Utilizamos uma placa Arduino Uno acoplada a um potenciômetro preso ao braço do usuário que captura os movimentos da articulação do braço e converte isso em dados que são interpretados pelo Arduino e transformados em clicks. Quanto mais contraído o braço da pessoas, maior a frequência de clicks. Dessa forma, a pessoa pode jogar uma versão customizada do game Flappy Bird enquanto faz exercícios de fisioterapia. 

*Obs.: O Arduino Uno teve seu firmware modificado para usar a biblioteca Keyboard que trata os dados do potenciômetro.