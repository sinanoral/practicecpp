#include <iostream>
#include "main.h"

int(*func())(const char *, const char *)
{
	return &strcmp;
}

void print(int a = 5, int b = 4)
{
	std::cout << a << " " << b << "\n";
}

auto main() -> int
{
	//constexpr belirteci ile tanimslanimis bir degiskene
	//a -> ilk deger vermek zorunlu.
	//b -> ilk deger veren ifadenin sabit ifade olmasi zorunlu.
	//constexpr bir tur degil ama const bir tur

	//constexpr ==> degisken
	//constexpr ==> fonksiyon

	print(4);
}