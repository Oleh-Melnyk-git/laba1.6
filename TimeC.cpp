#include "TimeC.h"

// Реалізація методів вкладеного класу Triad
void TimeC::Triad::Init(int h, int m, int s) {
  setHour(h);
  setMinute(m);
  setSecond(s);
}

void TimeC::Triad::Read() {
  int h, m, s;
  cout << "Введіть годину: ";
  cin >> h;
  cout << "Введіть хвилину: ";
  cin >> m;
  cout << "Введіть секунду: ";
  cin >> s;
  Init(h, m, s);
}

void TimeC::Triad::Display() const {
  cout << "Година: " << hour << ", Хвилина: " << minute
       << ", Секунда: " << second << endl;
}

void TimeC::Triad::increaseAll() {
  hour++;
  minute++;
  second++;
}

string TimeC::Triad::toString() const {
  return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
}

// Реалізація методів класу-контейнера TimeC
void TimeC::Init(Triad t) { setTriad(t); }

void TimeC::Read() {
  Triad t;
  t.Read();
  Init(t);
}

void TimeC::Display() const { triad.Display(); }

void TimeC::increaseAll() { triad.increaseAll(); }

void TimeC::addSeconds(int n) {
  int h = triad.getHour();
  int m = triad.getMinute();
  int s = triad.getSecond();

  s += n;
  m += s / 60;
  s %= 60;
  h += m / 60;
  m %= 60;

  triad.Init(h, m, s);
}

void TimeC::addMinutes(int n) {
  int h = triad.getHour();
  int m = triad.getMinute();
  int s = triad.getSecond();

  m += n;
  h += m / 60;
  m %= 60;

  triad.Init(h, m, s);
}

string TimeC::toString() const { return triad.toString(); }
