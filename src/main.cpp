#include "components/Buffer.hpp"
#include "components/Component.hpp"
#include "emulator/Emulator.hpp"
#include "wire/Wire.hpp"

#include <array>
#include <iostream>

int main() {
  std::vector<Component *> components;

  Wire wire0 = Wire(10);
  Wire wire1 = Wire(0);

  Buffer buffer = Buffer(&wire0, &wire1);
  components.push_back(&buffer);

  Emulator emulator = Emulator(components);
  std::cout << buffer.probe(1) << std::endl;
  emulator.pulse();
  std::cout << buffer.probe(1) << std::endl;
}
