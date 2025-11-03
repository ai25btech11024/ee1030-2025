#include<stdio.h>
#include<math.h>

float rank(float m[2][2],float e) {
	float y;
	
	float arr[2][2] = {{m[0][0]-e,m[0][1]},{m[1][0],m[1][1]-e}};

	float anchor = arr[1][0];
	float div = arr[0][0];
	if(arr[1][1]*anchor/div == 0) {
		y = -arr[0][0]/arr[0][1];
	}
	else {
		y = 0;
	}
	return y;
}

void eigen_vector(float mat[2][2]) {
	float y1,y2;

	float a = mat[0][0];
	float b = mat[0][1];
	float c = mat[1][0];
	float d = mat[1][1];

	float disc = (pow(a+d,2) - 4*(a*d-b*c));
	float e1 = ((a+d)+sqrt(disc))/2;
	float e2 = ((a+d)-sqrt(disc))/2;

	y1 = rank(mat,e1);
	y2 = rank(mat,e2);

	printf("The sum a+b = %f",y1+y2);
}
