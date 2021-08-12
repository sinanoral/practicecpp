#include <iostream>
#include "main.h"

int main()
{
	//constexpr belirteci ile tanimslanimis bir degiskene
	//a -> ilk deger vermek zorunlu.
	//b -> ilk deger veren ifadenin sabit ifade olmasi zorunlu.
	//constexpr bir tur degil ama const bir tur

	//constexpr ==> degisken
	//constexpr ==> fonksiyon

	const int x = 1;
	const int y = 3;
	constexpr int prime = isprime(factorial(ndigit(sum_square(x, y))));

}
