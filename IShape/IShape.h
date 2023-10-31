#pragma once
class IShape{
public:

	//ƒˆ‰¼‘zŠÖ”
	virtual void Size()=0;


	virtual void Draw()=0;


	virtual ~IShape() = 0;

protected:
	//–ÊÏ‚Í‹¤’Ê‚·‚é‚æ‚Ë
	float area_ = 0;



private:




};

