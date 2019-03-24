#ifndef COMPONENT_H
#define COMPONENT_H

#include "../wire/Wire.hpp"

#include <vector>

class Component {
public:
  virtual void clock() = 0;
  virtual void evaluateLogic() = 0;
  long probe(unsigned pinNumber);
  void drive(unsigned pinNumber, long value);

protected:
  std::vector<Wire *> pins;
};

#endif /* COMPONENT_H */
