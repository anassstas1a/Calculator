#include <SFML/Graphics.hpp>
#include <sstream>

#include "Buttons.h"
#include "Calculator.h"
#include "DisplayText.h"
#include "Separator.h"
#include "Test.h"
#include "UIController.h"
#include "Window.h"
int main() {
  TestsRunner test;
  test.runTests();

  sf::Font font;
  if (!font.loadFromFile("resources/ofont.ru_Times_New_Roman.ttf")) {
    return -1;
  }
  Calculator calculator;
  Window window;
  Buttons buttons(font);
  DisplayText displayText(font);

  UIController uiController(calculator, window, buttons, displayText);
  while (window.isOpen()) {
    uiController.handleEvents();
    uiController.updateDisplay();
    uiController.render();
  }
  return 0;
}
