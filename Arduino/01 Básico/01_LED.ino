int tiempo = 500; // Definimos el tiempo en milisegundos (ms)

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT); // Configutramos el LED integrado como salida
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH); // Encendemos LED integrado
    delay(tiempo); // Esperamos la cantidad de milisegundos definidos en la variable «tiempo»
    digitalWrite(LED_BUILTIN, LOW); // Apagamos el LED integrado
    delay(tiempo); // Esperamos de nuevo y reiniciamos el ciclo (loop)
}