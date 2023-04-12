# Checkpoint-edge-computing

Projeto para a Vinheria Agnello utilizando arduinos

O sistema elaborado é um sensor de luminosidade, para isso foi utilizado um fotorresistor(LDR).

Na placa de ensaio contamos com 3 leds (verde, amarelo e vermelho sendo esses para indicar que a luz do ambiente está apropriada, corrompida ou em níveis prejudiciais para o armazenamento dos vinhos), o fotorresistor e o buzzer.

A luz vermelha e o buzzer serão acionados caso haja alguma irregularidade que sobrepasse os níveis apropriados para conservar a qualidade dos produtos.

Para a montagem do circuito, é necessário um protoboard , 3 Led´s de cores distintas, 4 resistores,um fotorresistor, um Buzzer e um arduino.

Podemos começar inserindo os leds nos trilhos da protoboard

Led VERMELHO -> 3 e 4B (haste positiva no 4 e negativa no 3)
Led AMARELO -> 7 e 8B (haste positiva 8 e negativa 7)
Led VERDE -> 11 e 12B (haste positiva 12 e negativa 11)

Colocamos o fotorresistor com as hastes nos buracos 28 e 29F
e o Buzzer na 43 e 48G

Os resistores são colocados da seguinte forma:
1- terminal1 E4 e terminal2 G4
2- terminal1 E8 e terminal2 G8
3- terminal1 E12 e terminal2 G12
4- terminal1 H24 e terminal2 H29

Para os fios da protoboard, colocaremos desta maneira:
1- E3 e 3 negativo (-)
2- E7 e 7 negativo
3- E11 e 11 negativo
4- 51E e 51 negativo
5- 24J e 23 negativo 
6- 29J e 29 positivo(+) 
7- 43J e 42 negativo 

Conectando a protoboard ao arduino, os fios serão assim:
1- 4J na protoboard e -10 no arduino
2- 8J e -9
3-12J e 8
4- 28J e AO
5- 48J e 7
6- 52J e -3
7- 59 negativo e GND
8- 60 positivo e 5V


Após a montagem do circuito, é necessário codificar o arduino. 
Os passos para que o código funcione corretamente:
Declarar as váriaveis
Definir os pinos de led e buzina como saída
Configurar valores (para que os leds funcionem na "ordem" correta e, caso haja alterações no ambiente a buzina seja acionada).





