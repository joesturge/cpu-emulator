#ifndef EMULATOR_H
#define EMULATOR_H

#include "../components/Component.hpp"

#include <vector>

class Emulator {
public:
  Emulator(std::vector<Component *> components);
  void pulse();

private:
  std::vector<Component *> components;
};

#endif /* EMULATOR_H */
