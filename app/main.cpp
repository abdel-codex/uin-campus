#include "uincampus.hpp"
#include <cstdlib>
#include <format>
#include <print>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace {

enum class Suite { Continuer, Terminer, Erreur };

void afficherAide() {
  std::println("Usage : uin-campus [--version] [--aide]");
  std::println(
      "  --version : Affiche la version et les informations de construction");
  std::println("  --aide : Affiche cette aide");
}

[[nodiscard]] Suite traiterOptions(std::span<char *> arguments) {
  if (arguments.size() <= 1) {
    return Suite::Continuer;
  }
  for (const std::string_view option : arguments.subspan(1)) {
    if (option == "--version") {
      std::println("{}", uin::informationsConstruction());
      return Suite::Terminer;
    }
    if (option == "--aide") {
      afficherAide();
      return Suite::Terminer;
    }
    std::println(stderr, "Option inconnue : {}", option);
    afficherAide();
    return Suite::Erreur;
  }
  return Suite::Continuer;
}

} // namespace

int main(int argc, char *argv[]) {
  std::vector<char *> arguments(argv, argv + argc);
  Suite resultat = traiterOptions(arguments);
  if (resultat == Suite::Erreur) {
    return 1;
  }
  return 0;
}
