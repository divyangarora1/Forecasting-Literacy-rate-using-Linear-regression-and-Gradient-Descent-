#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
	double y1,b0=0.0,b1=0.0,error; 
    int epoches = 1;
    double learning_rate=0.001; 
    int N = 8;
    double q;
    double x[8], y[8]; 
    memcpy(x, (double[8]){10,20,40,45,60,65,75,80}, sizeof(double[8]));
    memcpy(y, (double[8]){32,44,68,74,92,98,110,116}, sizeof(double[8]));
    for(int i = 0; i < N; i++)
    {
        printf("%3.0lf\t%3.0lf\n", x[i], y[i]);
    } 
       for (int i = 0; i < epoches; i ++) 
	   {
            for(int e=2 ; e<=N ; e++)
            {
                y1 = b0*x[e] + b1;
                error = y1-y[e];
                b0 = b0 - learning_rate*error;
                b1 = b1 - learning_rate*error*x[e];
            }
	    }
        printf("y = %gx + %g\n\n",b0,b1);
        double y_new = b0*10 + b1;
        printf("%g\n",y_new); 
}