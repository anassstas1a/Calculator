# Calculator
A C++ calculator application with a graphical interface in SFML and a flexible Strategy-based core.

## 🚀 Features
- Parsing expressions into **Reverse Polish Notation**
- Pattern **Strategy** for algorithms
- **Operator precedence** and support for parentheses  
- Graphical interface in **SFML**
- **Modular codebase**:
  - **core/** — calculation engine, expression model  
  - **algorithms/** — RPN converter, separators, strategies  
  - **exceptions/** — exception classes (e.g. divide-by-zero)
  - **ui/** — SFML-based window, buttons, event controller, display  

## 📷 Screenshots
Main application window with custom **SFML** buttons and display
![Header](https://github.com/anassstas1a/Calculator/blob/master/assets/CalculatorView.png)

## 📝 Usage
1. Enter an arithmetic expression using the on-screen buttons or keyboard.
2. Press “=” to evaluate, “C” to clear.
3. Errors (such as division by zero) are printed to the console.
 ![Calculator Demo](https://github.com/anassstas1a/Calculator/blob/master/assets/CalculatorTest_5.gif)
