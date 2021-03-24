int tiempo = 500;

void setup()
{
    for(int led=2; led<=13; led++){
        pinMode(led, OUTPUT);
    }
}

void loop()
{
    for(int led=2; led<=13; led++){
        digitalWrite(led, HIGH);
        delay(tiempo);
        digitalWrite(led, LOW);
    }
    for(int led=13; led>=2; led--){
        digitalWrite(led, HIGH);
        delay(tiempo);
        digitalWrite(led, LOW);
    }
}