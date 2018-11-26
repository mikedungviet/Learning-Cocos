#pragma once
#include "cocos2d.h"


class Background: public cocos2d::Sprite
{
private:
	Background();
	void SetAnchorPoint(const cocos2d::Vec2&);
public:
	~Background();
	static Background* Create(const std::string &a_fileName);
	
};

