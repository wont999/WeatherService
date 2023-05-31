#pragma once
#include "Service.h"
#include "Weather.h"
#include "pugixml-master/src/pugixml.hpp"
#include "pugixml-master/src/pugiconfig.hpp"
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


