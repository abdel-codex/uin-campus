#include "uincampus/version.hpp"
#include <print>
int main() {
  std::println("UIN_Campus — Système de gestion académique");
  std::println("Version {}", uin::version());
}
