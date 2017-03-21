#include <Complex_t.hpp>
#include <catch.hpp>

SCENARIO("complex init w/o params", "[init w/o par]") {
	Complex_t z;
	REQUIRE(z.real() == 0);
	REQUIRE(z.imag() == 0);
}

SCENARIO("complex init with params", "[init w par]") {
	Complex z(5, 5);
	REQUIRE(z.real() == 5);
	REQUIRE(z.imag() == 5);
}

SCENARIO("complex copy init", "[copy init]") {
	Complex x(5, 5);
	Complex y(x);
	REQUIRE(y.real() == 5);
	REQUIRE(y.imag() == 5);
}
SCENARIO("complex sum", "[sum]") {
	Complex x(1, 1), y(2, 2), z(3, 3);
	REQUIRE(x.add(y) == z);
}

SCENARIO("complex subtraction", "[sub]") {
	Complex x(3, 3), y(2, 2), z(1, 1);
	REQUIRE(x.sub(y) == z);
}

SCENARIO("complex operator +=", "[op+=]") {
	Complex x(1, 1), y(2, 2), z(3, 3);
	x += y;
	REQUIRE(x == z);
}
SCENARIO("complex operator -=", "[op-=]") {
	Complex x(3, 3), y(2, 2), z(1, 1);
	x -= y;
	REQUIRE(x == z);
}

SCENARIO("==", "[equal]") {
	Complex x(1, 1);
	Complex y(1, 1);
	bool equal = false;
	if (x == y)
	{
		equal = true;
	}
	REQUIRE(equal == true);
}

SCENARIO("complex operator =", "[op=]") {
	Complex x(1, 1), y(2, 2);
	x = y;
	REQUIRE(x == y);
}


SCENARIO("complex multiplication ", "[multipl]") {
	Complex x(1, 1);
	int num = 5;
	x.multipl(num);
	REQUIRE(x.real() == 5);
	REQUIRE(x.imag() == 5);
}

SCENARIO("complex division", "[div]") {
	Complex x(10, 10);
	int num = 2;
	x.div(num);
	REQUIRE(x.real() == 5);
	REQUIRE(x.imag() == 5);
}

SCENARIO("complex operator *", "[op*]") {
	Complex x(1, 2), second(3, 4), third(-5, 10);
	REQUIRE((x * y) == z);
}

SCENARIO("complex operator /", "[op/]") {
	Complex x(5, 3), y(1, 1), z(4, -1);
	REQUIRE((x / y) == z);
}

SCENARIO("complex operator *=", "[op*=]") {
	Complex x(1, 2), y(3, 4), z(-5, 10);
	x *= y;
	REQUIRE(x == z);
}

SCENARIO("complex operator /=", "[op/=]") {
	Complex x(5, 3), y(1, 1), z(4, -1);
	x /= y;
	REQUIRE(x == z);
}
