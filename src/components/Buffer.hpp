#ifndef BUFFER_H
#define BUFFER_H

#include "../wire/Wire.hpp"
#include "Component.hpp"

#define DATA_PIN 0
#define OUTPUT_PIN 1

class Buffer : public Component {
public:
  Buffer(Wire *data, Wire *output);
  void clock();
  void evaluateLogic();
};

#endif /* BUFFER_H */
