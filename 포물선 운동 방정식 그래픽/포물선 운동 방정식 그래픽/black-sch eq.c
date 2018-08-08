#define _CRT_SECURE_NO_WARNINGS    // 보안 씹어주는 행
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double Normal(double);
double N(double, double, double, double, double);
double delta(double, double, double, double, double);
double delta2(double, double, double);
double ND2(double, double, double);
double bond(double, double, double, double, double);
double putValue(double, double, double, double, double);
double callValue(double, double, double, double, double);
int DAYS_IN_YEAR = 365;

int main(int argc, char *argv[])
{
	double strike = atof(argv[1]);
	double asset = atof(argv[2]);
	double std = atof(argv[3]);
	double rfr = atof(argv[4]);
	double dte = atof(argv[5]);
	printf("Strike Price: %f \n", strike);
	printf("Asset Price:  %f \n", asset);
	printf("Std Dev:      %f \n", std);
	printf("Risk Free:    %f \n", rfr);
	printf("Days to Exp:  %f \n", dte);
	printf("Put Value:    %f \n", putValue(strike, asset, std, rfr, dte));
	printf("Call Value:   %f \n", callValue(strike, asset, std, rfr, dte));
	printf("Delta Ratio:  %f \n", delta(strike, asset, std, rfr, dte));
	printf("T-Bills:      %f \n", bond(strike, asset, std, rfr, dte));
	return 0;
}


double N(double strike, double s, double sd, double r, double days)
{
	double ls = log(s);
	double lx = log(strike);
	double t = days / DAYS_IN_YEAR;
	double sd2 = pow(sd, 2);
	return ls - lx + r * t + sd2 * t / 2;
}

double delta(double strike, double s, double sd, double r, double days)
{
	double n = N(strike, s, sd, r, days);
	double sqT = sqrt(days / DAYS_IN_YEAR);
	double d = sd * sqT;
	double d1 = n / d;
	return Normal(d1);
}

double delta2(double n, double sd, double days)
{
	double sqT = sqrt(days / DAYS_IN_YEAR);
	double d = sd * sqT;
	double d1 = n / d;
	return Normal(d1);
}

double ND2(double n, double sd, double days)
{
	double sqrtT = sqrt(days / DAYS_IN_YEAR);
	double d = sd * sqrtT;
	double d1 = n / d;
	double d2 = d1 - sd * sqrtT;
	return Normal(d2);
}

double bond(double strike, double s, double sd, double r, double days)
{
	double n = N(strike, s, sd, r, days);
	double t = days / DAYS_IN_YEAR;
	double nd1 = delta2(n, sd, days);
	double nd2 = ND2(n, sd, days);
	return -strike * exp(-r*t) * nd2;
}


double callValue(double strike, double s, double sd, double r, double days)
{
	double n = N(strike, s, sd, r, days);
	double t = days / DAYS_IN_YEAR;
	double nd1 = delta2(n, sd, days);
	double b = bond(strike, s, sd, r, days);
	return s * nd1 + b;
}


double putValue(double strike, double s, double sd, double r, double days)
{
	double t = days / DAYS_IN_YEAR;
	double call = callValue(strike, s, sd, r, days);
	return strike * exp(-r * t) - s + call;
}


double Normal(double zz)
{
	//cdf of 0 is 0.5
	if (zz == 0)
	{
		return 0.5;
	}

	double z = zz;  //zz is input variable,  use z for calculations

	if (zz < 0)
		z = -zz;  //change negative values to positive

				  //set constants
	double p = 0.2316419;
	double b1 = 0.31938153;
	double b2 = -0.356563782;
	double b3 = 1.781477937;
	double b4 = -1.821255978;
	double b5 = 1.330274428;

	//CALCULATIONS
	double f = 1 / sqrt(2 * M_PI);
	double ff = exp(-pow(z, 2) / 2) * f;
	double s1 = b1 / (1 + p * z);
	double s2 = b2 / pow((1 + p * z), 2);
	double s3 = b3 / pow((1 + p * z), 3);
	double s4 = b4 / pow((1 + p * z), 4);
	double s5 = b5 / pow((1 + p * z), 5);

	//sz is the right-tail approximation
	double  sz = ff * (s1 + s2 + s3 + s4 + s5);

	double rz;
	//cdf of negative input is right-tail of input's absolute value 
	if (zz < 0)
		rz = sz;

	//cdf of positive input is one minus right-tail 
	if (zz > 0)
		rz = (1 - sz);
	return rz;
}