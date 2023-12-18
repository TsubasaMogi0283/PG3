#pragma once



//仮想関数に=0をつけたものを純粋仮想関数という
//純粋仮想関数だけで構成されたクラスをインターフェイスと呼ぶ
class IShape{
public:

	//純粋仮想関数
	virtual void Size()=0;


	virtual void Draw()=0;


	virtual ~IShape() = 0;

protected:
	//面積は共通するよね
	float area_ = 0;



private:




};

