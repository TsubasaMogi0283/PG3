﻿#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	std::list<std::string> yamanoteStation{
		"東京","神田","秋葉原","御徒町","上野","鶯谷","日暮里","西日暮里","田端","駒込",
		"巣鴨","大塚","池袋","目白","高田馬場","新大久保","新宿","代々木","原宿","渋谷",
		"恵比寿","目黒","五反田","大崎","品川","高輪ゲートウェイ","田町","浜松町","新橋","有楽町"

	};


	for (auto itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
		std::cout << *itr << "\n";
	}






	return 0;
}