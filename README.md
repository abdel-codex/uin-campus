
<<<<<<< HEAD
# 🎓 UIN-Campus
=======
# UIN-Campus
>>>>>>> c998bf7 (feat: implement version function)

**UIN-Campus** est une application développée en C++23 conçue pour la gestion académique (étudiants, unités d'enseignement, notes). Ce projet sert de socle pour appliquer les meilleures pratiques de développement logiciel moderne avec CMake, Git et l'analyse statique de code.

---

## Fonctionnalités principales

-  **Architecture C++23 moderne** : Utilisation des fonctionnalités récentes du langage.
-  **Build modulaire avec CMake** : Structure propre séparant l'application, les bibliothèques et les tests.
-  **Qualité de code garantie** : Intégration de `.clang-format` (style de code) et `.clang-tidy` (analyse statique et détection de bugs).
-  **Tests unitaires** : Découpage prêt pour l'intégration de tests automatiques.

---
## Environnement
Système : Ubuntu 26.04.1 LTS

Versions des outils relevées :

g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
Ubuntu clang version 21.1.8 (6ubuntu1)
cmake version 4.2.3
ninja 1.13.2
GNU gdb (Ubuntu 17.1-2ubuntu1) 17.1
git version 2.53.0

Norme utilisée : C++23.

Prérequis
sudo apt install build-essential clang clangd clang-format clang-tidy lldb gdb \
    cmake ninja-build valgrind cppcheck git
## construction
configuration et compilation avec le presset `debug` (sanitizers Asan et UBsan
actives ):

```bash
<<<<<<< HEAD
cmake --preset debug
cmake --build --preset debug
```
Exécution:

```bash
./build/debug/uin-campus
```
=======
Construire et exécuter
Version de développement (avec AddressSanitizer et UBSan) :

cmake --preset debug
cmake --build --preset debug
./build/debug/uin-campus
```
## Résultat attendu :

UIN-Campus — Système de gestion académique
Version 0.1.0
>>>>>>> c998bf7 (feat: implement version function)

## 📁 Structure du projet

```text
<<<<<<< HEAD
uin‐campus/
├── include/uincampus/
│ ├── version.hpp│
| ├── regles.hpp ← nouveau
│ └── saisie.hpp ← nouveau
├── src/
│ ├── version.cpp│
| ├── regles.cpp
│ └── saisie.cpp ← nouveau
└── app/
└── main.cpp
=======
uin-campus/
├── CMakeLists.txt        description de la construction
├── CMakePresets.json     configurations debug et release
├── .clang-format         règles de mise en forme du code
├── .clang-tidy           règles d'analyse du code
├── .gitignore            fichiers ignorés par Git
├── include/uincampus/    en-têtes (.hpp)
├── src/                  implémentations (.cpp)
├── app/                  programme principal (main.cpp)
└── tests/                tests unitaires (à venir)
>>>>>>> c998bf7 (feat: implement version function)
