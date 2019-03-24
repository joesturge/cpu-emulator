#ifndef BUFFER_H
#define BUFFER_H

#include "Component.hpp"

class Buffer : public Component {
public:
  Buffer(Wire *data, Wire *outout);
  void clock();
  void evaluateLogic();
};

#endif /* BUFFER_H */
