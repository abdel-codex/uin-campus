
# 🎓 UIN-Campus

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
cmake --preset debug
cmake --build --preset debug
```
Exécution:

```bash
./build/debug/uin-campus
```

## 📁 Structure du projet

```text
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
