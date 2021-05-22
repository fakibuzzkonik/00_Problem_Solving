#include <stdio.h>
#include <math.h>

int main() {
    long long a,b,c;
    while(scanf("%lld %lld %lld",&a, &b, &c) == 3){
    	double s = (a+b+c)/2.0;
    	double triangle = sqrt(s*(s-a)*(s-b)*(s-c));

    	double r = (2*triangle)/(double)(a+b+c);
    	double circle = r*r*acos(-1);

    	double R = a*b*c/4.0/triangle;
    	double CIRCLE = R*R*acos(-1) - triangle;

    	triangle = triangle - circle;

    	printf("%0.4lf %0.4lf %0.4lf\n", CIRCLE, triangle, circle);

    }
    return 0;
}
