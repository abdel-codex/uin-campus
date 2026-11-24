# UIN-Campus
Système de gestion académique de l'Université Islamique du Niger (UIN). Projet fil rouge du cours de Programmation Orientée Objet en C++ moderne.

**UIN-Campus** est une application développée en C++23 conçue pour Système de gestion académique de l'Université Islamique du Niger (UIN). Projet fil rouge du cours de Programmation Orientée Objet en C++ moderne.
---

## Fonctionnalités principales

- **Architecture C++23 moderne** : Utilisation des fonctionnalités récentes du langage.
- **Build modulaire avec CMake** : Structure propre séparant l'application, les bibliothèques et les tests.
- **Qualité de code garantie** : Intégration de `.clang-format` (style de code) et `.clang-tidy` (analyse statique et détection de bugs).
- **Tests unitaires** : Découpage prêt pour l'intégration de tests automatiques.

---

## Environnement

- **Système** : Ubuntu 26.04.1 LTS
- **Norme utilisée** : C++23

**Versions des outils relevées :**
- `g++` (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- `clang` version 21.1.8 (6ubuntu1)
- `cmake` version 4.2.3
- `ninja` 1.13.2
- `gdb` (Ubuntu 17.1-2ubuntu1) 17.1
- `git` version 2.53.0

**Prérequis :**
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
UIN-Campus — Système de gestion académique
Version 0.1.0
```

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
├── README.md
├── include/
│   └── uincampus/
│       ├── uincampus.hpp
│       ├── version.hpp
│       ├── regles.hpp
│       ├── saisie.hpp
│       └── calculs.hpp
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

