#pragma once

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
	static cocos2d::Scene* CreateScene();
	virtual bool init() override;

	CREATE_FUNC(HelloWorld);
};