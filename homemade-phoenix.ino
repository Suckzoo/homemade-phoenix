void setup()
{
    Serial.begin(9600);
	pinMode(7, INPUT);
}

void loop()
{
    int input = digitalRead(7);
    Serial.print("button returns: ");
    Serial.print(input);
    Serial.print("\n");
	delay(500);
}
