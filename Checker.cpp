#include <assert.h>
#include <iostream>
using namespace std;

bool isTemperatureOk(float temperature) {
  return temperature >= 0 && temperature <= 45;
}

bool isSocOk(float soc) {
  return soc >= 20 && soc <= 80;
}

bool isChargeRateOk(float chargeRate) {
  return chargeRate <= 0.8;
}

// Pure function with CCN = 3
bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return isTemperatureOk(temperature) &&
         isSocOk(soc) &&
         isChargeRateOk(chargeRate);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
