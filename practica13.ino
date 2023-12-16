// C++ code
//
void setup()
{
  // Establécense o pin 10 como de entrada, e os 11, 12 e 13 como de saída
  pinMode(10, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(10) == LOW) { // Se o pulsador non está pulsado
    digitalWrite(LED_BUILTIN, HIGH); // Activa os leds do pin 13
  }
  delay(10000); // Espera 10 segundos
  if (digitalRead(10) == LOW) { // Se o pulsador non está pulsado
    digitalWrite(LED_BUILTIN, LOW); // Desactiva os leds do pin 13
  }
  delay(4000); // Espera 4 segundos
  if (digitalRead(10) == LOW) { // Se o pulsador non está pulsado
    digitalWrite(12, HIGH); // Activa o led do pin 12
    digitalWrite(11, HIGH); // Activa o relé da bombilla
  }
  delay(10000); // Espera 10 segundos
  if (digitalRead(10) == LOW) { // Se o pulsador non está pulsado
    digitalWrite(12, LOW); // Desactiva o led do pin 12
    digitalWrite(11, LOW); // Desactiva o relé da bombilla
  }
  delay(4000); // Espera 4 segundos
}
