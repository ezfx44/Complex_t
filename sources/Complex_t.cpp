#include "Complex_t.hpp"

Complex_t::Complex_t() : _re(0.0), _im(0.0) {}

Complex_t::Complex_t(double re, double im) : _re(re), _im(im) {}

Complex_t::Complex_t(const Complex_t& z) : _re(z._re), _im(z._im) {}

double Complex_t::real()
{
	return _re;
}

double Complex_t::imag()
{
	return _im;
}

void Complex_t::print(std::ostream& os) const
{
	if (_im < 0)
	{
		os << _re << _im << "i" << std::endl;
	}
	else
	{
		os << _re << "+" << _im << "i" << std::endl;
	}
}

Complex_t Complex_t::add(const Complex_t& x) const
{
	return Complex_t(_re + x._re, _im + x._im);
}

Complex_t Complex_t::sub(const Complex_t& x) const
{
	return Complex_t(_re - x._re, _im - x._im);
}

Complex_t Complex_t::multipl(int a) const
{
	return Complex_t(_re * a, _im * a);
}

Complex_t Complex_t::div(int a) const
{
	return Complex_t(_re / a, _im / a);
}

Complex_t Complex_t::operator*(const Complex_t& z) const
{
	return Complex_t(_re * z._re - _im * z._im, _re * z._im + _im * z._re);
}

Complex_t Complex_t::operator/(const Complex_t& z) const
{
	return Complex_t((_re * z._re + _im * z._im) / (z._re * z._re + z._im * z._im),
					(z._re * _im - _re * z._im) / (z._re * z._re + z._im * z._im));
}

Complex_t Complex_t::operator+=(const Complex_t& z)
{
	_re += z._re;
	_im += z._im;
	return *this;
}

Complex_t Complex_t::operator-=(const Complex_t& z)
{
	_re -= z._re;
	_im -= z._im;
	return *this;
}

Complex_t Complex_t::operator*=(const Complex_t& z)
{
	double tmp_r = _re;
	tmp_r = _re * z._re - _im * z._im;
	_im = _re * z._im + _im * z._re;
	_re = tmp_r;
	return *this;
}

Complex_t Complex_t::operator/=(const Complex_t& z)
{
	double tmp_r = _re;
	tmp_r = (_re * z._re + _im * z._im) / (z._re * z._re + z._im * z._im);
	_im = (z._re * _im - _re * z._im) / (z._re * z._re + z._im * z._im);
	_re = tmp_r;
	return *this;
}

Complex_t Complex_t::operator=(const Complex_t& z)
{
	_re = z._re;
	_im = z._im;
	return *this;
}

bool Complex_t::operator==(const Complex_t& z)
{
	if (_re == z._re && _im == z._im)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/*
template <class CharT, class Traits, class Allocator>
std::basic_ostream<charT, Traits>& Complex_t::operator <<(std::basic_ostream<charT, Traits>& os, const Complex_t& z)
{
	if (_im < 0)
	{
		os << _re << _im << "i" << std::endl;
	}
	else
	{
		os << _re << "+" << _im << "i" << std::endl;
	}
	return os;
}

template <class CharT, class Traits, class Allocator>
std::basic_istream<charT, Traits>& Complex_t::operator >> (std::basic_istream<charT, Traits>& is, Complex_t& z)
{
	std::cout << "Введите действительную часть:";
	is >> z._re;
	std::cout << "Введите мнимую часть:";
	is >> z._im
	return is;
}
*/
