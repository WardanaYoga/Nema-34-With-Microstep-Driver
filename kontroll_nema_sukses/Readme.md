# Nema-34-With-Microstep-Driver
This contenct i use the nema 34 and microstep dtiver and i include 12 VDC power supply

Parameter yang Dibutuhkan
Untuk menghitung Langkah Total yang diperlukan agar kereta bergerak sejauh 1,5 meter (1.500 mm) dengan timing belt, Anda memerlukan informasi berikut:

a. Pitch Timing Belt
Pitch adalah jarak antar gigi pada timing belt (biasanya dalam mm). Misalnya, pitch umum adalah 2 mm, 3 mm, atau 5 mm. Periksa spesifikasi timing belt Anda.

b. Diameter Pulley (Pitch Diameter)
Pulley terhubung ke motor stepper, dan setiap putaran penuh pulley akan menarik belt sejauh keliling pulley.
Keliling pulley dihitung sebagai:

Keliling Pulley = Diameter Pitch Pulley × 𝜋
Keliling Pulley=Diameter Pitch Pulley×π

c. Langkah Per Putaran Motor
Motor stepper NEMA 34 memiliki 1.8° per langkah. Untuk satu putaran penuh:

Langkah Per Putaran = 360 derajat / 1.8 derajat = 200 langkah

Jika menggunakan microstepping, langkah per putaran meningkat. Misalnya:

1/8 microstepping → 200 × 8 = 1.600 microsteps per putaran.
1/16 microstepping → 200 × 16 = 3.200 microsteps per putaran.

2. Rumus Langkah Total
Rumus untuk menghitung langkah total menjadi:

Langkah Total
=
Jarak Lintasan
Keliling Pulley
×
Langkah Per Putaran
Langkah Total= 
Keliling Pulley
Jarak Lintasan
​
 ×Langkah Per Putaran
3. Contoh Perhitungan
Mari kita hitung dengan asumsi berikut:

Jarak Lintasan = 1.500 mm (1,5 meter).
Pitch Pulley = 20 mm (keliling pulley = 20 mm per putaran).
Langkah Per Putaran = 200 langkah (tanpa microstepping).

a. Keliling Pulley
Keliling pulley adalah jumlah jarak yang ditarik timing belt dalam satu putaran penuh motor:
Keliling Pulley=20mm

b. Jumlah Putaran
Jumlah putaran motor untuk mencapai jarak 1,5 meter:

Jumlah Putaran = Jarak Lintasan / Keliling Pulley = 1500 / 20 = 75 putaran
 
c. Langkah Total
Langkah total motor stepper:
Langkah Total = Jumlah Putaran × Langkah Per Putaran = 75 × 200 = 15.000 langkah

Jika menggunakan 1/16 microstepping, langkah total menjadi:
Langkah Total = 15.000 × 16 = 240.000 microsteps
