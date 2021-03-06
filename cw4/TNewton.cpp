//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TNewton.cpp
//  @ Date : 19.03.2018
//  @ Author :
//
//


#include "TNewton.h"

double TNewton::newton(int n, int k) {
    D = n - k;
    double j = 1;
    if(k >= D) {
        for(int i = k + 1; i <= n; i++)
            j *= i;
        return (j/pFactorial->factorial(n - k));
    }
    else {
        for(int i = D+1; i <= n; i++)
            j *= i;
        return (j / pFactorial->factorial(k));
    }

}

TNewton::TNewton() {
    pFactorial = new TFactorial;
}

TNewton::~TNewton() {
    delete pFactorial;
}

