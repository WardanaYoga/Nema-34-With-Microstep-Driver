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

