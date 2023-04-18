// Define o pino A0 como "Sensor de umidade"
const int pinSensor = A0;

//Define o pino 8 como "pino rele"
const int pinRelay = 8;

//escala de umidade
const int drySoil = 1010;   //solo muito seco
const int dampSoil = 600;   //solo seco
const int soakedSoil = 545; //solo encharcado

//porcentagem de umidade do solo
int readValue = 0;

void setup() {

  //rele pin 8
  digitalWrite(pinRelay, HIGH); //configuração da saída do relé (relé de baixo nível lógico) ALTO está DESLIGADO
  pinMode(pinRelay, OUTPUT);

  Serial.begin(9600);


  //sensorpin mode
  pinMode(pinSensor, INPUT);
}

//conversão da escala do valor analogico para escala de 0% a 100%
void PorcentagemUmidade(int readValue){
  // sensor - valor do solo, máximo, divisível e positivo
  readValue = 100 - (map(readValue, 330, 1024, 0, 100));

  Serial.print("Umidade do solo: "); 
  Serial.print(readValue);
  Serial.print("%");
  Serial.println("");

}

//envia sinal para o relé
void LigaBomba(){
  digitalWrite(pinRelay, LOW);
}

//corta o sinal do relé
void DesligaBomba(){
  digitalWrite(pinRelay, HIGH);
}

//valor acima do piso de muito seco
void SoloMuitoSeco(){
  Serial.print("Solo muito seco   ");  // solo muito seco
  Serial.print("   Confirmado       ");
  Serial.print("   Irrigando       ");
  Serial.print("   aguarde...      ");
  Serial.println("");
  Serial.println("");
      
  while(readValue >= drySoil){
    LigaBomba();
    readValue = analogRead(pinSensor);
  }

  PorcentagemUmidade(readValue);
}

//valor acima do piso de muito seco
void SoloSeco(){
  Serial.print("Solo seco          ");  //solo seco
  Serial.print("   Confirmado       ");
  Serial.print("   Irrigando       ");
  Serial.print("   aguarde...      ");
  Serial.println("");
  Serial.println("");
  
  while(readValue < drySoil && readValue > dampSoil){
    LigaBomba();
    readValue = analogRead(pinSensor);
  }
  
  PorcentagemUmidade(readValue);
}


void loop() {
 
  //leitura do sensor
  readValue = analogRead(pinSensor);
  
  Serial.print("Valor no sensor: "); 
  Serial.println(readValue);
  
  PorcentagemUmidade(readValue);

  //verificações
  if (readValue >= drySoil) {
    SoloMuitoSeco();
  }   
  else if (readValue < drySoil && readValue > dampSoil){
    SoloSeco();     
  } 

  //casos onde a bomba irá desligar
  else if (readValue <= dampSoil && readValue > soakedSoil){
      DesligaBomba();
      Serial.print("Umidade ideal     ");  //solo ideal
      Serial.println("");
      Serial.println("");
  } 
  else if (readValue <= soakedSoil){
      DesligaBomba();
      Serial.print("Solo encharcado   ");  //solo encharcado
      Serial.println("");
      Serial.println("");
  } 
  else{
      DesligaBomba();
      Serial.print("Erro na leitura   ");  //erro de leitura do sensor
  }
  delay(2000);
}