#include "Buffer.hpp"
#include "../wire/Wire.hpp"

#include <iostream>

#include <vector>

Buffer::Buffer(Wire *data, Wire *output) {
  this->pins.push_back(data);
  this->pins.push_back(output);
}

void Buffer::clock() { drive(1, probe(0)); }

void Buffer::evaluateLogic() {}
