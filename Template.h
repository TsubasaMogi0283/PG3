#pragma once

template <typename Type>


class Template{
public:
	Type height;
	Type width;


	Template(Type height, Type width) :height(height), width(width) {

	}

	Type Size() {
		return height * width;
	}



};

