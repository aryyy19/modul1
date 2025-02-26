# 🧮 Praktikum Algoritma & Pemrograman

![GitHub last commit](https://img.shields.io/github/last-commit/username/repo)
![GitHub code size](https://img.shields.io/github/languages/code-size/username/repo)
![GitHub language count](https://img.shields.io/github/languages/count/username/repo)

Repositori ini berisi kumpulan tugas praktikum mata kuliah Algoritma & Pemrograman. Setiap modul berisi implementasi konsep-konsep fundamental dalam pemrograman menggunakan bahasa Python.

## 📚 Daftar Modul

### 📂 Modul 1: [Judul Modul 1]
![Progress](https://img.shields.io/badge/Progress-100%25-brightgreen)
📅 Deadline: DD/MM/YYYY  
📝 Deskripsi:  
[Deskripsi lengkap modul 1]  
✅ **Status**: Selesai

---

### 📂 Modul 2: Simulasi Toggle Pintu Tak Terhingga
![Progress](https://img.shields.io/badge/Progress-100%25-brightgreen)
📅 Deadline: DD/MM/YYYY  
📝 **Deskripsi Permasalahan:**

Sebuah simulasi interaksi 7 orang dengan serangkaian pintu tak terhingga yang awalnya dalam kondisi **tertutup semua**. Setiap orang akan memodifikasi status pintu berdasarkan pola tertentu:

#### 🔢 Aturan Operasi Tiap Orang
| Orang | Pola Pintu yang Dikunjungi | Aksi |
|-------|-----------------------------|-------|
| 1     | Semua nomor **ganjil** (1, 3, 5, ...) | Membuka pintu |
| 2     | Kelipatan **3** (3, 6, 9, ...) | Toggle status (buka/tutup) |
| 3     | Kelipatan **5** (5, 10, 15, ...) | Toggle status (buka/tutup) |
| 4     | Kelipatan **8** (8, 16, 24, ...) | Toggle status (buka/tutup) |
| 5     | Kelipatan **11** (11, 22, 33, ...) | Toggle status (buka/tutup) |
| 6     | Kelipatan **11** (11, 22, 33, ...) | Toggle status (buka/tutup) |
| 7     | Kelipatan **26** (26, 52, 78, ...) | Toggle status (buka/tutup) |

#### 💡 Mekanisme Toggle
- Jika pintu **tertutup** → Dibuka
- Jika pintu **terbuka** → Ditutup

#### 📌 Contoh Simulasi (Pintu 1-15):
Kondisi Awal: [T][T][T][T][T][T][T][T][T][T][T][T][T][T][T]

Setelah Orang 1: [O][T][O][T][O][T][O][T][O][T][O][T][O][T][O]
Setelah Orang 2: [O][T][X][T][O][X][O][T][X][T][O][X][O][T][X]
...

#### 🎯 Tujuan Program
1. Memodelkan operasi toggle pintu
2. Menganalisis pola akhir status pintu
3. Menghitung jumlah pintu terbuka setelah semua orang selesai

❌ **Status**: belum selesai

---

... (template yang sama untuk modul 3-6)

---

### 📂 Modul 7: [Judul Modul 7]
![Progress](https://img.shields.io/badge/Progress-0%25-red)
📅 Deadline: DD/MM/YYYY  
📝 Deskripsi:  
[Deskripsi lengkap modul 7]  
❌ **Status**: Belum dikerjakan

## 🛠️ Teknologi yang Digunakan
- ![Python](https://img.shields.io/badge/Python-3.11+-blue?logo=python)
- ![VS Code](https://img.shields.io/badge/Editor-VS_Code-blue?logo=visual-studio-code)
- ![Git](https://img.shields.io/badge/Version_Control-Git-orange?logo=git)

## 📥 Instalasi
```bash
git clone https://github.com/username/repo.git
cd repo
