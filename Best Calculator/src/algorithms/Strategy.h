#pragma once
struct Strategy {
  virtual ~Strategy() = default;
  virtual double calculate() = 0;
};
