//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TUniversity.h
//  @ Date : 12.03.2018
//  @ Author : 
//
//


#if !defined(_TUNIVERSITY_H)
#define _TUNIVERSITY_H


class TUniversity {
public:
	void attach(TStudent* st);
	void detach();
	void printData(int i);
	void setData(int i, string name, int age);
private:
	vector<TStudent*> students;
};

#endif  //_TUNIVERSITY_H
