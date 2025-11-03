#include<math.h>

double norm_sq(double arr[2]){
	return arr[1]*arr[1] + arr[0]*arr[0];
}

double dot(double a[2],double b[2]){
	return a[0]*b[0] + a[1]*b[1];
}
double area(double c[2],double p[2]){
	double pi=acos(-1);

	double u[2]={-c[0],-c[1]};
	double r_sq = norm_sq(p) +2*(dot(u,p)) + norm_sq(c);
	double A = pi*r_sq;

	return A;
}
