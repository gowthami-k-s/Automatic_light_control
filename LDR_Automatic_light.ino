
#define LDR_PIN A0
#define LED_PIN 13

int sensorValue;
int threshold = 500;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    sensorValue = analogRead(LDR_PIN);

    Serial.print("LDR Value: ");
    Serial.println(sensorValue);

    if (sensorValue < threshold)
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }

    delay(500);
}
