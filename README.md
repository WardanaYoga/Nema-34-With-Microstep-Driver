Motor NEMA 34 biasanya memiliki kebutuhan arus dan tegangan yang cukup tinggi, sehingga penggunaan satu driver untuk dua motor bisa menimbulkan beberapa masalah, seperti:

1. Arus Tidak Mencukupi
Kebanyakan driver stepper motor dirancang untuk mengendalikan satu motor saja. Jika Anda menghubungkan dua motor ke satu driver, arus yang dibutuhkan akan meningkat, dan driver mungkin tidak mampu menyuplai arus yang cukup. Ini dapat menyebabkan motor tidak bekerja secara optimal atau bahkan merusak driver.
2. Pengendalian Tidak Presisi
Driver stepper motor dirancang untuk mengontrol satu motor dengan presisi tinggi. Jika dua motor terhubung ke satu driver, pembagian arus dan sinyal dapat menyebabkan kedua motor tidak bergerak dengan sinkron atau kehilangan langkah.
3. Efisiensi dan Panas
Driver akan bekerja lebih keras untuk mengendalikan dua motor, yang dapat menyebabkan peningkatan suhu pada driver dan menurunkan efisiensi keseluruhan sistem.
Rekomendasi:
Lebih baik menggunakan driver yang berbeda untuk masing-masing motor. Hal ini akan memastikan:

Arus mencukupi untuk setiap motor.
Kontrol presisi pada masing-masing motor.
Keandalan dan umur panjang driver dan motor.
Jika Anda ingin kedua motor bergerak secara sinkron, Anda dapat menghubungkan input sinyal kontrol (step/direction) dari kedua driver ke sumber sinyal yang sama (misalnya microcontroller atau CNC controller). Dengan cara ini, kedua motor akan menerima sinyal kontrol yang identik tetapi tetap dikendalikan oleh driver masing-masing.

LANGKAH MENGHIDUPKAN MOTOR NEMA CNC
1. MENGGUNAKAN GBRL UPLOAD PADA ARDUINO UNO
2. MENGGUNAKAN OPENBUILDS
3. MEMBALIK KABEL SALAH SATU MOTOR NEMA DI SUMBU X MISAL A+ JADI A-

Untuk menghubungkan 4 driver stepper motor dengan Arduino Uno menggunakan GRBL dan OpenBuilds, berikut adalah konfigurasi pin yang sesuai:

Konfigurasi Pin Arduino Uno untuk GRBL
GRBL default menggunakan pin sebagai berikut:

X Step → Pin 2
X Dir → Pin 5
Y Step → Pin 3
Y Dir → Pin 6
Z Step → Pin 4
Z Dir → Pin 7
Enable (Semua driver) → Pin 8
Karena dua motor NEMA terhubung ke sumbu X, Anda bisa:

Metode Paralel: Sambungkan kedua driver stepper ke pin yang sama (X Step & X Dir).
Metode Seri: Sambungkan kedua motor ke satu driver (hanya untuk motor dengan spesifikasi identik).
