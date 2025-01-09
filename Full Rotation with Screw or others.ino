// Pin untuk TB6600
#define STEP_PIN 7  // PUL+
#define DIR_PIN 6 // DIR+
#define ENA_PIN 5   // ENA+

// Parameter gerakan
int totalSteps = 3000; // Jumlah langkah untuk jarak lintasan (hitung sesuai mekanisme Anda)
int stepDelay = 500;   // Waktu antar langkah (microseconds, sesuaikan kecepatan)

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
  digitalWrite(DIR_PIN, LOW); // LOW = mundur
  moveSteps(totalSteps);

  delay(1000); // Tunggu 1 detik di ujung
}

// Fungsi untuk menggerakkan motor sebanyak langkah tertentu
void moveSteps(int steps) {
  for (int i = 0; i < steps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
  digitalWrite(ENA_PIN, HIGH);
}
