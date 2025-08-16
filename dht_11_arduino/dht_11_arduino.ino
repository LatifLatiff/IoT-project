#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const int LED_G = 9, LED_Y = 10, LED_R = 11, BUZZ = 8;

void setup() {
  pinMode(LED_G, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}

void setLeds(bool g, bool y, bool r) {
  digitalWrite(LED_G, g);
  digitalWrite(LED_Y, y);
  digitalWrite(LED_R, r);
}

void loop() {
  float t = dht.readTemperature();  // °C
  float h = dht.readHumidity();     // %RH
  if (isnan(t) || isnan(h)) return;

  Serial.print("T:");
  Serial.print(t);
  Serial.print("C  H:");
  Serial.print(h);
  Serial.println("%");

  // Basit konfor/uyarı: nem>70 veya T>30 ise sarı; nem>80 veya T>35 ise kırmızı
  if (h > 80 || t > 35) {
    setLeds(0, 0, 1);
    tone(BUZZ, 2000, 300);
  } else if (h > 70 || t > 30) {
    setLeds(0, 1, 0);
    noTone(BUZZ);
  } else {
    setLeds(1, 0, 0);
    noTone(BUZZ);
  }

  delay(2000);
}
