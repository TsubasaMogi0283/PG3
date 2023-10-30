#pragma once

template <typename Type>


class Template{
public:
	Type hieght;
	Type width;


	Template(Type height, Type width) :height(height), width(width) {

	}

	Type Size() {
		return hieght * width;
	}



};

