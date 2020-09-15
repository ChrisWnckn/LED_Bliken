/*
   Ersteller: C.Wiencken
   Letzte Änderung 11.09.2020
   Hardware: Arduino UNO, grüne LED, passender Vorwiderstand
   Programmbeschreibung:
   Eine Led wird zum Blinken gebracht.
   Hierzu wird die Onbaord LED auf Pin 13 benutzt und im 1 sec takt zum blinken gerbracht
   Erweiterung um eine externe LED auf PIN 3, die PIN 13 ersetzt
*/

#define BoardLED   13           //LED auf Pin 13 onbaord
#define LED        3            //externe LED in grün auf Pin 3


void setup()
{

  pinMode (LED, OUTPUT);
  Serial.begin(9600);          // Kontrolle

}

void loop()
{
  digitalWrite (LED, HIGH);    //LED an
  Serial.println("LED an ");
  delay (1000);                //Taktzeit
  digitalWrite (LED, LOW);     //LED aus
  Serial.println("LED aus ");
  delay (1000);
}
