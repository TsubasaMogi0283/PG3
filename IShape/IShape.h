#pragma once
class IShape{
public:

	//�������z�֐�
	virtual void Size()=0;


	virtual void Draw()=0;


	virtual ~IShape() = 0;

protected:
	//�ʐς͋��ʂ�����
	float area_ = 0;



private:




};

