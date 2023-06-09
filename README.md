
# Acionamento de motor para irrigação automatizada 

Este projeto é uma prototipagem utilizando Arduino com objetivo de demonstrar a utilização do relé de canal duplo e o sensor higrômetro ou sensor de umidade de solo.

Objetivos:

- [x] Leitura do valor analógico do sensor de umidade de solo. 
- [x] Escala da umidade.
- [x] Exibir porcentagem da umidade do solo.
- [x] Script de execução separado em funções.
- [x] Não necessita de fonte de alimentação externa para o motor de 5V, mas tensões maiores precisam de uma fonte externa.
- [x] Acionamento e desligamento do motor em condição da escala de umidade.

## 🚀 Instruções de montagem

Estas são as instruções de ligações para a montagem do circuito, existem formas diferentes de realizar a ligação do relé.
OBS: A imagem é apenas uma orientação, pode apresentar diferenças entre layot de peças ou modelos inseridos em comparação em seu modelo real.

<img src="/acionamento_de_motor/Esquema_montagem.png">

### Materiais utilizados:
```
- Arduino Uno R3.
- Sensor higrometro ou sensor de umidade de solo.
- Modulo Relé 2 canais.
- Motor de aquário 5V.
- Cabos para as ligações.
```


### 🔧 Sobre o higrômetro ou sensor de umidade de solo

<table>
  <tr>
    <td>Higrômetro ou sensor de umidade de solo</td>
    <td><img src="/acionamento_de_motor/sensor_de_umidade_do_solo_higrometro.jpeg" alt="sensor higrometro"></td>
  </tr>
</table>


>O higrômetro ou sensor de umidade do solo é um dispositivo utilizado para medir a umidade da terra. Ele é geralmente enterrado no solo, próximo às raízes das plantas, para monitorar a quantidade de água disponível no solo. É comumente utilizado em aplicações de irrigação, plantações, agricultura e pecuária.

>Os sensores de umidade do solo são projetados para serem resistentes à corrosão e capazes de suportar as condições climáticas e ambientais em que são instalados. Eles geralmente possuem uma instalação simples, com dois eletrodos que são inseridos no solo para conduzir corrente elétrica. A umidade do solo afeta a resistência elétrica do solo, onde a água diminui a resistência e o solo seco conduz com mais dificuldade.

>A leitura da umidade do solo é obtida por meio da comparação da resistência elétrica medida pelo sensor com os valores de referência previamente calibrados. Com base nessa leitura, é possível determinar o nível de umidade do solo e tomar decisões informadas sobre a irrigação ou outras práticas agrícolas.

>É importante notar que a calibração adequada dos sensores de umidade do solo é essencial para obter medições precisas. A calibração deve ser realizada com base nas características do solo específico em que o sensor está sendo utilizado, uma vez que diferentes tipos de solo têm diferentes propriedades elétricas.


### 🔧 Sobre o relé

<table>
  <tr>
    <td>Esquema do relé utilizando fonte em arduino</td>
    <td><img src="/acionamento_de_motor/rele_c_fonte12V.jpeg" alt="Com fonte 12V em arduino"></td>
  </tr>
  <tr>
    <td>Esquema do relé sem fonte em esp32</td>
    <td><img src="/acionamento_de_motor/rele_s_fonte_esp.jpeg" alt="Sem fonte em esp32"></td>
  </tr>
  <tr>
    <td>Esquema do relé sem fonte em arduino</td>
    <td><img src="/acionamento_de_motor/rele_s_fonte_ard.jpeg" alt="Sem fonte em arduino"></td>
  </tr>
</table>


>Relé e contato seco?
Relé: Um relé é um dispositivo eletromecânico que é usado para controlar circuitos elétricos por meio do uso de uma bobina eletromagnética. Quando uma corrente elétrica passa pela bobina, ela cria um campo magnético que atrai um conjunto de contatos para fechar ou abrir um circuito elétrico separado, permitindo assim o controle de dispositivos elétricos ou eletrônicos.

>Contato seco: O contato seco de um relé é uma forma de contato que não possui nenhuma conexão elétrica direta com a bobina eletromagnética do relé. Quando a bobina é energizada, o campo magnético atrai ou repele os contatos, fazendo com que se movam para fechar ou abrir um circuito elétrico. Os contatos não têm conexão elétrica direta com a bobina e, portanto, não há corrente elétrica fluindo pelos contatos quando eles se fecham ou abrem.

>Contato molhado: O contato molhado de um relé é uma forma de contato que tem uma conexão elétrica direta com a bobina eletromagnética do relé. Quando a bobina é energizada, a corrente elétrica flui diretamente pelos contatos, permitindo que eles fechem ou abram um circuito elétrico. Os contatos molhados são geralmente usados em aplicações de alta corrente ou alta voltagem, onde os contatos precisam ser mais robustos e capazes de lidar com maior demanda de corrente elétrica.

>Em resumo, o contato seco de um relé não tem conexão elétrica direta com a bobina, enquanto o contato molhado tem uma conexão elétrica direta com a bobina, permitindo a passagem de corrente elétrica pelos contatos quando eles se fecham ou abrem. Os contatos molhados são geralmente usados em aplicações de alta corrente ou alta voltagem, enquanto os contatos secos são usados em aplicações de menor corrente ou voltagem.

## 🛠️ Construído utilizando

* [Arduino IDE 2.0.4](https://downloads.arduino.cc/arduino-ide/nightly/arduino-ide_nightly-latest_Windows_64bit.zip) - O IDE usado.

* [Fritzing](https://fritzing.org/download/) - Software para prototipagem.

Alternativa ao Fritzing

* [Tinkercad](https://www.tinkercad.com/) - Site de simulação de projetos com arduino e modelagem.


[⬆ Voltar ao topo](#Acionamento_de_motor)<br>
