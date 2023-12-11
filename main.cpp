#include <stdio.h>
#include <list>
#include <iostream>

//std::stringを使ってはいけないということは
//std::を抜けばいいということ!?
using namespace std;

int main() {

	std::list<const char*> yamanoteStation{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucyo"

	};

	cout << "山手線の全駅" << "\n";
	cout << "1970年、2019年、2022年の一覧を表示します" << "\n";
	cout << "どの年を表示しますか?" << "\n";

	
	//入力
	int selectYear = 0;
	cin >> selectYear;

	//1970年版
	if (selectYear == 1970) {
		cout << "1970年の駅一覧を表示します" << "\n";
	}


	//2019年版

	if (selectYear == 2019) {
		cout << "2019年の駅一覧を表示します" << "\n";
		cout << "1972年に西日暮里駅が開業しました" << "\n";
		for (list<const char*>::iterator itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
			if (*itr == "Tabata") {
				itr = yamanoteStation.insert(itr, "Nishi-Nippori");
				++itr;
			}
		}
		
	}

	//2022年版
	if (selectYear == 2022) {
		cout << "2022年の駅一覧を表示します" << "\n";
		cout << "2020年に高輪ゲートウェイ駅が開業しました" << "\n";
		for (list<const char*>::iterator itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
			if (*itr == "Tabata") {
				itr = yamanoteStation.insert(itr, "Nishi-Nippori");
				++itr;
			}
			if (*itr == "Tamachi") {
				itr = yamanoteStation.insert(itr, "Takanawa GateWay");
				++itr;
			}
		}
		
	}
	

	//追加した後に表示
	for (list<const char*>::iterator itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
			
		cout << *itr << "\n";
	}


	cout << "\n\n";
	cout << "メモ" << "\n";
	cout << "営業上は全部山手線だけど,本来は田端～東京間は東北本線の一部" << "\n";
	cout << "東京～品川間は東海道本線の一部だよ" << "\n";
	cout << "他にJK,JAなどもそうだね" << "\n";


	return 0;
}