# UIN-Campus

**UIN-Campus** est une application développée en C++23 conçue pour la gestion académique (étudiants, unités d'enseignement, notes). Ce projet sert de socle pour appliquer les meilleures pratiques de développement logiciel moderne avec CMake, Git et l'analyse statique de code.

---

## Fonctionnalités principales

- **Architecture C++23 moderne** : Utilisation des fonctionnalités récentes du langage.
- **Build modulaire avec CMake** : Structure propre séparant l'application, les bibliothèques et les tests.
- **Qualité de code garantie** : Intégration de `.clang-format` (style de code) et `.clang-tidy` (analyse statique et détection de bugs).
- **Tests unitaires** : Découpage prêt pour l'intégration de tests automatiques.

---

## Environnement

Système : Ubuntu 26.04.1 LTS

Versions des outils relevées :

- `g++` (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- `clang` version 21.1.8 (6ubuntu1)
- `cmake` version 4.2.3
- `ninja` 1.13.2
- `gdb` (Ubuntu 17.1-2ubuntu1) 17.1
- `git` version 2.53.0

Norme utilisée : C++23.

Prérequis :
```bash
sudo apt install build-essential clang clangd clang-format clang-tidy lldb gdb \
    cmake ninja-build valgrind cppcheck git
```

---

## Construction

Configuration et compilation avec le preset `debug` (sanitizers ASan et UBSan activés) :

```bash
cmake --preset debug
cmake --build --preset debug
```

Exécution :

```bash
./build/debug/app/uin-campus
```

### Construire, tester, installer, versionner

```bash
rm -rf build
cmake --preset debug
cmake --build --preset debug
./build/debug/app/uin-campus
```

### Résultat attendu :

```text
UIN-Campus 0.1.0 — Relevé d'un étudiant

Nom de l'étudiant : Abdel Rahim
Nombre d'UE (1 à 30) : 5
  Note de l'UE 1 : 19
  Coefficient de l'UE 1 : 8
  Note de l'UE 2 : 19
  Coefficient de l'UE 2 : 9
  Note de l'UE 3 : 19
  Coefficient de l'UE 3 : 9
  Note de l'UE 4 : 19
  Coefficient de l'UE 4 : 9
  Note de l'UE 5 : 20
  Coefficient de l'UE 5 : 9

---------------------------------------------
Étudiant                                Abdel Rahim
Moyenne pondérée                              19.20
Moyenne simple                                19.20
Note min / max                        19.00 / 20.00
Écart-type                                     0.40
UE validées                                   5 / 5
Mention                                   Très bien
---------------------------------------------
```[cite: 5]

```bash
./build/debug/app/uin-campus --version
```

### Pour le chemin dans `.vscode/launch.json`. Exemple de sortie :

```text
UINCampus 0.1.0 — GCC 14.2.0 — C++ (202302) — Debug
```

### Installation locale de la version Release

```bash
cmake --preset release
cmake --build --preset release
cmake --install build/release --prefix ~/.local
~/.local/bin/uin-campus --version
```

---

## 📁 Structure du projet

```text
uin-campus/
├── CMakeLists.txt
├── CMakePresets.json
├── include/uincampus/
│   ├── uincampus.hpp
│   ├── version.hpp
│   ├── regles.hpp
│   ├── saisie.hpp
│   └── calculs.hpp
├── src/
│   ├── CMakeLists.txt
│   ├── config.hpp.in
│   ├── version.cpp
│   ├── regles.cpp
│   ├── saisie.cpp
│   └── calculs.cpp
├── app/
│   ├── CMakeLists.txt
│   └── main.cpp
└── test/
```
