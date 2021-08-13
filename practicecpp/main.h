#ifndef MAIN_H
#define MAIN_H

//=========================================================================================================================

/*
	AAA		=> ALMOST ALWAYS AUTO
	ADL		=> ARGUMENT DEPENDANT LOOKUP
	ODR		=> ONE DEFINITiON RULE
	EBO		=> EMPTY BASE OPTIMIZATÝON
	SFINAE	=> SUBSTITUION FAILURE IS NOT AN ERROR.
	RAII	=> RESOURCE ACQUISITION IS INIT.
*/

//=========================================================================================================================

#define pvc(x) (std::cout << "value category of '" #x << "' is : " << Valcat<decltype(x)>::pvcat << "\n")

template<typename T>
struct Valcat {
	constexpr static const char *pvcat = "PR Value";
};

template<typename T>
struct Valcat<T &> {
	constexpr static const char *pvcat = "L Value";
};

template<typename T>
struct Valcat<T &&> {
	constexpr static const char *pvcat = "X Value";
};

/*
	PR value => T
	L  value => T &
	X  value => T &&
*/

//=========================================================================================================================


constexpr int sum_square(int a, int b)
{
	return a * a + b * b;
}

constexpr int ndigit(int val)
{
	if (val == 0)
		return 1;

	int digit_cout = 0;
	while (val) {
		++digit_cout;
		val /= 10;
	}

	return digit_cout;
}

constexpr int factorial(int n)
{
	return n < 2 ? 1 : n * factorial(n - 1);
}

constexpr bool isprime(int val)
{
	if (val == 0 || val == 1)
		return false;
	if (val % 2 == 0)
		return val == 2;
	if (val % 3 == 0)
		return val == 3;
	if (val % 5 == 0)
		return val == 5;
	for (int i = 7; i * i <= val; i += 2)
		if (val % i == 0)
			return false;
	return false;
}

//=========================================================================================================================

#endif // !MAIN_H
