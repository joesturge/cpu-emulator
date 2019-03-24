#include "Emulator.hpp"

#include "../components/Component.hpp"

Emulator::Emulator(std::vector<Component *> components) {
  this->components = components;
}

void Emulator::pulse() {
  for (unsigned i = 0; i < this->components.size(); i++) {
    this->components.at(i)->clock();
  }
  for (unsigned i = 0; i < this->components.size(); i++) {
    this->components.at(i)->evaluateLogic();
  }
}
