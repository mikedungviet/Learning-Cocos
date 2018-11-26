#include "Background.h"

Background::Background()
{
	
}


Background::~Background()
{
}

Background* Background::Create(const std::string& a_fileName)
{
	auto l_tempBackground = new Background();
	if (l_tempBackground && l_tempBackground->initWithFile(a_fileName))
	{
		l_tempBackground->autorelease();
		l_tempBackground->SetAnchorPoint(cocos2d::Vec2(0.f, 0.f));
		return l_tempBackground;
	}
	CC_SAFE_DELETE(l_tempBackground);
	return nullptr;
}

void Background::SetAnchorPoint(const cocos2d::Vec2& anchor)
{
	Sprite::setAnchorPoint(anchor);
}

