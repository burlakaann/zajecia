//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TNewton.h
//  @ Date : 19.03.2018
//  @ Author :
//
//


#if !defined(_TNEWTON_H)
#define _TNEWTON_H


class TNewton {
public:
	double newton(int n, int k);
private:
	TFactorial *pFactorial;
	int D;
	TNewton();
	~TNewton();
};

#endif  //_TNEWTON_H