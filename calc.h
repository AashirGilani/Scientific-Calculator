#ifndef CALC_H
#define CALC_H
#define pi (3.1415926/180); 

#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<iostream>
#include<vector>

extern int run,welcome;
extern double total;

void intro();

class calc
{
    public:
void asktocontinue(calc &mycalc);
void addition(calc &mycalc);
void subtraction(calc &mycalc);
void multiplication(calc &mycalc);
void division(calc &mycalc);
void exponent(calc &mycalc);
void logar(calc &mycalc);
void baseconversion(calc &mycalc);
void trigonometry(calc &mycalc);
void inversetrig(calc &mycalc);
void rat(calc &mycalc);
void sine(calc &mycalc);
void cosine(calc &mycalc);
void tangent(calc &mycalc);
void secant(calc &mycalc);
void cosecant(calc &mycalc);
void cotangent(calc &mycalc);
void sinhyp(calc &mycalc);
void coshyp(calc &mycalc);
void tanhyp(calc &mycalc);
void cosechyp(calc &mycalc);
void sechyp(calc &mycalc);
void cothyp(calc &mycalc);
void sininverse(calc &mycalc);
void cosinverse(calc &mycalc);
void taninverse(calc &mycalc);
void cosecinverse(calc &mycalc);
void secinverse(calc &mycalc);
void cotinverse(calc &mycalc);
void coshinverse(calc &mycalc);
void sinhinverse(calc &mycalc);
void tanhinverse(calc &mycalc);
void angleconversions(calc &mycalc);
void calculatepercentages(calc &mycalc);

};

#endif

