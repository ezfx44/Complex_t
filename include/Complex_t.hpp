#include <iostream>
#include <string>
#ifndef COMPLEX_T_H_
#define COMPLEX_T_H_
class Complex_t
{
private:
	double _re, _im;
public:
	Complex_t();
	Complex_t(double, double);
	void print(std::ostream&) const;
	Complex_t add(const Complex_t&) const;
	Complex_t sub(const Complex_t&) const;
	Complex_t multipl(int a) const;
	Complex_t div(int a) const;
	double real() const;
	double imag() const;
	Complex_t(const Complex_t&);
	Complex_t operator*(const Complex_t&) const;
	Complex_t operator/(const Complex_t&) const;
	Complex_t operator+=(const Complex_t&);
	Complex_t operator-=(const Complex_t&);
	Complex_t operator*=(const Complex_t&);
	Complex_t operator/=(const Complex_t&);
	Complex_t operator=(const Complex_t&);
	bool operator==(const Complex_t&);
	template <class CharT, class Traits>
	friend std::basic_ostream<CharT, Traits>& operator <<(std::basic_ostream<CharT, Traits>&, const Complex_t&);
	template <class CharT, class Traits>
	friend std::basic_istream<CharT, Traits>& operator >> (std::basic_istream<CharT, Traits>&, Complex_t&);
};
#endif
