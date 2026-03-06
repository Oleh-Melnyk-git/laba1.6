#include "TimeC.h"
using namespace std;

int main() {
  TimeC t;
  t.Read();
  cout << "Початковий час: ";
  t.Display();

  t.increaseAll();
  cout << "Після increaseAll(): ";
  t.Display();

  t.addSeconds(125);
  cout << "Після addSeconds(125): ";
  t.Display();

  t.addMinutes(75);
  cout << "Після addMinutes(75): ";
  t.Display();

  cout << "Час у форматі рядка: " << t.toString() << endl;

  return 0;
}
