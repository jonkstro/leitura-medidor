unsigned long enviarDados = millis();
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(2400);
}

void loop() {
String envio = "";
int conteudo[50];
int i = 0;
  while(Serial.available() > 0){
    if (Serial.available()){
      int leitura = Serial.read();
      
      //Serial.print(leitura);
      //Serial.print('|');
      conteudo[i] = (leitura);
      //envio = envio + (String(conteudo[i])+"|");
      //Serial.print(envio);
      
      i++;  
    }
  }
  delay(30000);
  for (int x = 0; x<30; x++){
    envio = envio + (String(conteudo[x])+"|");
    //Serial.print(conteudo[x]);
    //Serial.print(x);
  }
  Serial.println("O que será enviado ao servidor: "+envio);
  /*if((millis() - enviarDados) > 5000){
    Serial.println("O valor que será enviado é : "+envio);
    enviarDados = millis();
  }*/

}











//19:50:42.524 -> |AA|55|0|22|65|5|22|5|A|2|0|0|16|ED|ED|AA|55|0|22|65|5|22|5|A|51|0|0|0|7D|67
//O VALOR QUE SERÁ ENVIADO É: 170|85|0|34|101|5|34|5|10|2|0|0|22|237|237|170|85|0|34|101|5|34|5|10|81|0|0|0|125|103|
