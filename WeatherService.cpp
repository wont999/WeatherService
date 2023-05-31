#include <iostream>
#include "Weather.h"
#include "JsonService.h"
using namespace std;
int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");

}
