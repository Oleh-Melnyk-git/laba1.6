#pragma once
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class TimeC {
public:
  class Triad {
  private:
    int hour;
    int minute;
    int second;

  public:
    Triad() : hour(0), minute(0), second(0) {}

    void Init(int h, int m, int s);
    void Read();
    void Display() const;
    void increaseAll();
    string toString() const;

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    void setSecond(int s) { second = s; }
  };

private:
  Triad triad;

public:
  TimeC() {}

  void setTriad(Triad t) { triad = t; }
  Triad getTriad() const { return triad; }

  void Init(Triad t);
  void Read();
  void Display() const;

  void increaseAll();
  void addSeconds(int n);
  void addMinutes(int n);

  string toString() const;
};