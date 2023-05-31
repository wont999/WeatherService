#pragma once
#include <fstream>
#include "Service.h"
#include "Weather.h"
#include "json-develop/single_include/nlohmann/json.hpp"

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};
