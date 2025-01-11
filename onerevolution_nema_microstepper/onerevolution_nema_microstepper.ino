// Pin pada Arduino yang terhubung ke TB6600
#define STEP_PIN 7  // PUL+ pada driver
#define DIR_PIN 6   // DIR+ pada driver
#define ENA_PIN 5   // ENA+ pada driver

// Parameter gerakan
int stepsPerRevolution = 200; // Langkah untuk satu putaran penuh (tanpa microstepping)
int microstepMultiplier = 16; // Microstepping, sesuaikan dengan pengaturan pada driver
int stepDelay = 500;          // Waktu antar langkah dalam mikrodetik (sesuaikan kecepatan)

void setup() {
  // Set pin sebagai output
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(ENA_PIN, OUTPUT);

  // Aktifkan driver (ENA biasanya aktif dengan LOW)
  digitalWrite(ENA_PIN, LOW);

  
}

void loop() {
  // Pastikan arah motor (HIGH = maju, LOW = mundur)
  digitalWrite(DIR_PIN, HIGH); 
  // Gerakkan motor satu putaran penuh
  oneRevolution();
  
  // Tunggu 2 detik
  delay(2000);

  // Ubah arah
  digitalWrite(DIR_PIN, LOW); 
  oneRevolution();
  
  // Tunggu 2 detik
  delay(2000);
  digitalWrite(ENA_PIN, HIGH);
}

// Fungsi untuk menjalankan satu putaran penuh
void oneRevolution() {
  int totalSteps = stepsPerRevolution * microstepMultiplier; // Langkah total
  for (int i = 0; i < totalSteps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
}
