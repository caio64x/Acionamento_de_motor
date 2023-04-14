
# Acionamento de motor para irrigação autimatizada 

Este projeto é uma prototipagem utilizando Arduino com objetivo de demonstrar a atuação do relé de canal duplo e o sensor higrometro ou sensor de umidade de solo.

Objetivos:

- [x] Leitura do valor analógico do sensor de umidade de solo 
- [x] Escala da umidade
- [x] Exibir porcentagem da umidade do solo
- [x] Script de execução separado em funções
- [x] Não necessita de fonte de alimentação externa para o motor de 5V, mas tensões maiores precisam
- [x] Acionamento e desligamento do motor em codição da escala de umidade

## 🚀 Instruções de montagem

Estas são as instruções de ligações para a montagem do circuito, existem formas diferentes de realizar a ligação do relé.
OBS: A imagem é apenas uma orientação, pode apresentar diferenças entre layot de peças ou modelos inseridos em comparação em seu modelo real.

<img src="/acionamento_de_motor/Esquema_montagem.png">

### Materiais utilizados:
```
- Arduino Uno R3
- Sensor higrometro ou sensor de umidade de solo
- Modulo Relé 2 canais
- Motor de aquário 5V
- Cabos para as ligações
```

### 🔧 Sobre o relé

| Esquema do relé utilizando fonte em arduino |
| <img src="/acionamento_de_motor/rele_c_fonte12V.jpeg"> |

| Esquema do relé sem fonte em esp32 |
| <img src="/acionamento_de_motor/rele_s_fonte_esp.jpeg"> |

| Esquema do relé sem fonte em arduino |
| <img src="/acionamento_de_motor/rele_s_fonte_ard.jpeg"> |


>Relé e contato seco?
Contato seco é um termo usado para descrever um tipo de contato elétrico que não fornece energia aos contatos (completamente passiva e isolada). Os contatos de saída de um relé eletromagnético ou óptico são exemplos de contatos secos. Isso significa que a energia do relé eletromagnético é fornecida à bobina do relé, e não aos próprios contatos. Isso ajuda?

## 🛠️ Construído utilizando

Mencione as ferramentas que você usou para criar seu projeto

* [Arduino IDE 2.0.4](https://downloads.arduino.cc/arduino-ide/nightly/arduino-ide_nightly-latest_Windows_64bit.zip) - O IDE usado.

* [Fritzing](https://fritzing.org/download/) - Software para prototipagem.

Alternativa ao Fritzing

* [Tinkercad](https://www.tinkercad.com/) - Site de simulação de projetos com arduino e modelagem.

[⬆ Voltar ao topo](#Acionamento_de_motor)<br>
