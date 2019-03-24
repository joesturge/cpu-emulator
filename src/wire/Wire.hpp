#ifndef WIRE_H
#define WIRE_H

class Wire {
public:
  Wire(long value);
  long get();
  void set(long value);

private:
  long value;
};

#endif /* WIRE_H */
