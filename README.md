
# 🎓 UIN-Campus

**UIN-Campus** est une application développée en C++23 conçue pour la gestion académique (étudiants, unités d'enseignement, notes). Ce projet sert de socle pour appliquer les meilleures pratiques de développement logiciel moderne avec CMake, Git et l'analyse statique de code.

---

## 🚀 Fonctionnalités principales

- 🛠️ **Architecture C++23 moderne** : Utilisation des fonctionnalités récentes du langage.
- ⚙️ **Build modulaire avec CMake** : Structure propre séparant l'application, les bibliothèques et les tests.
- 🎨 **Qualité de code garantie** : Intégration de `.clang-format` (style de code) et `.clang-tidy` (analyse statique et détection de bugs).
- 🧪 **Tests unitaires** : Découpage prêt pour l'intégration de tests automatiques.

---

## 📁 Structure du projet

```text
uin-campus/
├── app/                  # Point d'entrée principal (main.cpp)
├── include/              # Fichiers d'en-tête (.hpp)
├── src/                  # Fichiers sources (.cpp)
├── tests/                # Tests unitaires
├── .clang-format         # Configuration du formatage automatique
├── .clang-tidy           # Configuration des règles d'analyse statique
├── .gitignore            # Fichiers et dossiers ignorés par Git
└── CMakeLists.txt        # Fichier de configuration CMake principal
