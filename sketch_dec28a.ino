// Analog veriyi okuma ve seri port üzerinden milisaniye ile birlikte gönderme

// Analog giriş pini
const int analogPin = A0;

// Zaman ölçüm değişkeni
unsigned long startTime;

void setup() {
  // Seri iletişimi başlat
  Serial.begin(115200);
  
  // Başlangıç zamanını al
  startTime = millis();
}

void loop() {
  // Analog değeri oku
  int analogValue = analogRead(analogPin);

  // Geçen zamanı milisaniye cinsinden hesapla
  unsigned long elapsedMilliseconds = millis() - startTime;

  // Veriyi formatlı şekilde seri porta yazdır
  Serial.print(analogValue);
  Serial.print(",");
  Serial.println(elapsedMilliseconds);

  // 1 milisaniye bekle
delay(50);
}