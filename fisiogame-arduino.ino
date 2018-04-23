#include <Keyboard.h> //V: INCLUI LIB KEYBOARD 
const int pinoPot = A5; //PINO ANALÓGICO UTILIZADO PELO POTENCIÔMETRO
int leituraA5; //VARIÁVEL QUE ARMAZENA O VALOR LIDO NA PORTA ANALÓGICA
  
void setup(){  
  pinMode(pinoPot, INPUT); //DEFINE A PORTA COMO ENTRADA
  //Serial.begin(9600); //V: SERIAL COMENTADA  - INICIALIZA A SERIAL

  // Sends a clean report to the host. This is important because
  // the 16u2 of the Uno/Mega is not turned off while programming
  // so you want to start with a clean report to avoid strange bugs after reset.
  Keyboard.begin();
}    
void loop(){  
  leituraA5 = analogRead(pinoPot); //LÊ O VALOR NA PORTA ANALÓGICA (VALOR LIDO EM BITS QUE VAI DE 0 A 1023 BITS)
  Serial.print(leituraA5); //IMPRIME NA SERIAL O VALOR LIDO NA PORTA ANALÓGICA
  Serial.println(" bits"); //IMPRIME O TEXTO NA SERIAL
  //delay(100); //INTERVALO DE 100 MILISSEGUNDOS
   if (leituraA5 > 950){
    Serial.println("Espera");
     Keyboard.print("Espera");
    //delay(2000);
  } else 
  if ((leituraA5 > 800) && (leituraA5 < 1023)){
    Serial.println("Estendido");
     Keyboard.print("w");
     delay(600);
  } else 
    if ((leituraA5 < 799) && (leituraA5 > 500)){
    Serial.println("90 graus");
    Keyboard.print("w");
     delay(300);
  } else 
    if ((leituraA5 < 499) && (leituraA5 > 0)){
    Serial.println("Contraido");
    Keyboard.print("w");
     delay(20);
  }
  

  
}
