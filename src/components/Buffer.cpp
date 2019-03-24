#include "Buffer.hpp"

Buffer::Buffer(Wire *data, Wire *output) {
  this->pins.push_back(data);
  this->pins.push_back(output);
}

void Buffer::clock() { drive(OUTPUT_PIN, probe(DATA_PIN)); }

void Buffer::evaluateLogic() {}
