#include <iostream>
#include "Weather.h"
#include "JsonService.h"
#include "XmlService.h"
using namespace std;
int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");﻿
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
}
