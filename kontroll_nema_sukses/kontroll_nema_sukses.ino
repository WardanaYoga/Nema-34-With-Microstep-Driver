// Pin untuk TB6600
#define STEP_PIN 7  // PUL+
#define DIR_PIN 6 // DIR+
#define ENA_PIN 5   // ENA+

// Parameter gerakan
// Jumlah langkah untuk jarak lintasan (hitung sesuai mekanisme Anda)
int totalSteps = 10000; 
// Waktu antar langkah (microseconds, sesuaikan kecepatan)
int stepDelay = 500;  

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(ENA_PIN, OUTPUT);

  // Aktifkan driver
  digitalWrite(ENA_PIN, LOW); // LOW untuk mengaktifkan
}

void loop() {
  // Gerak maju ke ujung pertama
  digitalWrite(DIR_PIN, HIGH); // HIGH = maju
  moveSteps(totalSteps);

  delay(1000); // Tunggu 1 detik di ujung

  // Gerak mundur ke ujung kedua
  digitalWrite(DIR_PIN, HIGH); // LOW = mundur
  moveSteps(totalSteps);

  delay(1000); // Tunggu 1 detik di ujung
  digitalWrite(ENA_PIN, HIGH);
}

void moveSteps(int steps) {
  for (int i = 0; i < steps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
  
}
