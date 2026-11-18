
# UIN-Campus
Système de gestion académique de l'Université Islamique du Niger (UIN). Projet fil rouge du cours de Programmation Orientée Objet en C++ moderne.

**UIN-Campus** est une application développée en C++23 conçue pour Système de gestion académique de l'Université Islamique du Niger (UIN). Projet fil rouge du cours de Programmation Orientée Objet en C++ moderne.
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

```bash
##Construire, tester, installer, versionner

rm -rf build
cmake --preset debug
cmake --build --preset debug
./build/debug/uin-campus
```
## Résultat attendu :

UIN-Campus — Système de gestion académique
Version 0.1.0

```bash
./build/debug/app/uin-campus --version

```
## our le chemin dans .vscode/launch.json . Exemple de sortie ::
```
UINCampus 0.1.0 — GCC 14.2.0 — C++ (202302) — Debug
```
```bash
##Installation locale de la version Release
cmake --preset release
cmake --build --preset release
cmake --install build/release --prefix ~/.local
~/.local/bin/uin-campus --version

```

## 📁 Structure du projet

```text
uin-campus/
├── CMakeLists.txt
├── CMakePresets.json
├── include/uincampus/
    │
    ├── uincampus.hpp
    │
    ├── version.hpp
    │
    ├── regles.hpp
    │
    ├── saisie.hpp
    │
    └── calculs.hpp
├── src/
    │
    ├── CMakeLists.txt
    │
    ├── config.hpp.in
    │
    ├── version.cpp
    │
    ├── regles.cpp
    │
    ├── saisie.cpp
    │
    └── calculs.cpp
    ├── app/
    │
    ├── CMakeLists.txt
    │
    └── main.cpp
    └── tests/
