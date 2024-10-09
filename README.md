Notasi Kalimat Deskriptif Algoritma Dijkstra
Inisialisasi:

Mulai dengan mendefinisikan graf sebagai kumpulan node dan edge dengan bobot.
Pilih satu node sebagai sumber dan tetapkan jarak dari sumber ke dirinya sendiri sebagai 0. Untuk semua node lainnya, tetapkan jarak awal sebagai tak terhingga (infinity).
Buat himpunan kosong untuk menyimpan node yang telah dikunjungi.
Pilih Node Terkecil:

Dari semua node yang belum dikunjungi, pilih node dengan jarak terkecil dari sumber. Ini akan menjadi node saat ini.
Perbarui Jarak:

Untuk setiap neighbor dari node saat ini, hitung jarak total dari sumber ke neighbor melalui node saat ini.
Jika jarak total ini lebih kecil daripada jarak yang sebelumnya tercatat untuk neighbor, perbarui jarak neighbor tersebut dengan jarak total yang baru.
Tandai Node Terkunjungi:

Setelah semua neighbor dari node saat ini telah diproses, tandai node saat ini sebagai dijelaskan (visited) sehingga tidak akan diproses lagi di masa mendatang.
Ulangi:

Ulangi langkah 2 hingga semua node telah dikunjungi atau jarak terkecil yang ditemukan adalah tak terhingga (yang berarti node tujuan tidak dapat dijangkau).
Selesaikan:

Setelah semua node telah dijelaskan, jarak yang tercatat untuk node tujuan adalah jarak terpendek dari sumber ke tujuan. Jika jarak untuk node tujuan masih tak terhingga, ini menunjukkan bahwa tidak ada jalur yang tersedia.
Contoh Penerapan
Misalkan kita memiliki graf yang terdiri dari node A, B, C, dan D, dengan bobot sebagai berikut:

A ke B: 1
A ke C: 4
B ke C: 2
B ke D: 5
C ke D: 1
Kita ingin mencari jalur terpendek dari node A ke node D.

Proses:
Inisialisasi:

Jarak awal: A=0, B=∞, C=∞, D=∞.
Himpunan yang dikunjungi: {}.
Pilih Node Terkecil:

Node saat ini: A (jarak 0).
Perbarui Jarak:

Jarak B: min(∞, 0 + 1) = 1.
Jarak C: min(∞, 0 + 4) = 4.
Himpunan yang dikunjungi: {A}.
Pilih Node Terkecil Berikutnya:

Node saat ini: B (jarak 1).
Perbarui Jarak:

Jarak C: min(4, 1 + 2) = 3.
Jarak D: min(∞, 1 + 5) = 6.
Himpunan yang dikunjungi: {A, B}.
Pilih Node Terkecil Berikutnya:

Node saat ini: C (jarak 3).
Perbarui Jarak:

Jarak D: min(6, 3 + 1) = 4.
Himpunan yang dikunjungi: {A, B, C}.
Pilih Node Terkecil Berikutnya:

Node saat ini: D (jarak 4).
Himpunan yang dikunjungi: {A, B, C, D}.
Hasil:
Jarak terpendek dari A ke D adalah 4 melalui jalur A → B → C → D.
