#include "Wire.hpp"

Wire::Wire(long value) { this->value = value; }

void Wire::set(long value) { this->value = value; }

long Wire::get() { return this->value; }
