# StudentManagementSystem

---

## 🇬🇧 English

### About the Project
A console-based C++ application for managing university student records. Built with a clean `header/source/main` structure, it supports adding, displaying, searching, filtering, and file-persisting student data.

### Features
- **Add students** — with name, surname, ID, group, and GPA (`ortalama`)
- **Display all students** — formatted, aligned output
- **Search by ID** — reliable lookup by unique student ID
- **Duplicate ID prevention** — a student cannot be added if the ID already exists
- **Search by GPA range** — find students whose average falls within a given range
- **Search by group** — filter students by group number
- **Remove student by ID**
- **Find top performer(s)** — displays the student(s) with the highest GPA
- **File persistence** — data is automatically saved to and loaded from `telebeler.txt`

### Project Structure
```
StudentManagementSystem/
├── include/
│   ├── Telebe.h
│   └── Universitet.h
├── src/
│   ├── Telebe.cpp
│   ├── Universitet.cpp
│   └── main.cpp
└── README.md
```

### Build Instructions
```bash
g++ -std=c++17 -Iinclude src/*.cpp -o proqram
./proqram
```

### Usage
On launch, the program displays a menu:
1. Add a student
2. Show all students
3. Search by ID
4. Search by GPA range
5. Search by group
6. Remove student
7. Show top performer(s)
8. Save to file
9. Load from file
0. Exit

---

## 🇦🇿 Azərbaycan dilində

### Layihə haqqında
Universitet tələbələrinin qeydiyyatını idarə edən, C++ ilə yazılmış konsol tətbiqidir. Təmiz `header/source/main` strukturunda qurulub və tələbələrin əlavə edilməsi, göstərilməsi, axtarılması, filtrlənməsi və fayla saxlanması funksiyalarını dəstəkləyir.

### Xüsusiyyətlər
- **Tələbə əlavə etmə** — ad, soyad, ID, qrup və orta bal (`ortalama`) ilə
- **Bütün tələbələri göstərmə** — düzgün formatda, sətirlərə düzülmüş çıxış
- **ID üzrə axtarış** — unikal tələbə ID-si ilə etibarlı axtarış
- **Təkrar ID qarşısının alınması** — eyni ID artıq mövcuddursa, yeni tələbə əlavə olunmur
- **Ortalama aralığında axtarış** — müəyyən bal aralığına düşən tələbələrin tapılması
- **Qrup üzrə axtarış** — qrup nömrəsinə görə filtrlənmə
- **ID üzrə tələbə silmə**
- **Ən yüksək ortalamalı tələbə(lər)** — ən yüksək baldakı tələbə(ləri) göstərir
- **Fayla saxlama** — məlumatlar avtomatik `telebeler.txt` faylına yazılır/oxunur

### Qovluq strukturu
```
StudentManagementSystem/
├── include/
│   ├── Telebe.h
│   └── Universitet.h
├── src/
│   ├── Telebe.cpp
│   ├── Universitet.cpp
│   └── main.cpp
└── README.md
```

### Compile etmək
```bash
g++ -std=c++17 -Iinclude src/*.cpp -o proqram
./proqram
```

### İstifadə
Proqram işə düşdükdə menyu göstərilir:
1. Telebe elave et
2. Telebeleri goster
3. ID ile axtar
4. Ortalama araliginda axtar
5. Qrup axtar
6. Telebeni sil
7. En yuksek ortalama
8. Fayla yaz
9. Fayldan oxu
0. Cixis

---

## 📄 License
This project is free to use for educational purposes.
