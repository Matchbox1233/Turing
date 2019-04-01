#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int a= pow(2,32)-1;    
    #pragma omp parallel for schedule(dynamic, 1)
    for(unsigned int i=0;i<a;i++)
    {
        //printf("%d. Ez egy végtelen ciklus.\n",i);
        if(i>200000000) i=0;
    }
    return 0;
}