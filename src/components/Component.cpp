#include "Component.hpp"
#include "../wire/Wire.hpp"

long Component::probe(unsigned pinNumber) {
  if (pinNumber < this->pins.size()) {
    return this->pins.at(pinNumber)->get();
  }
  return 0;
}

void Component::drive(unsigned pinNumber, long value) {
  if (pinNumber < this->pins.size()) {
    this->pins.at(pinNumber)->set(value);
  }
}
