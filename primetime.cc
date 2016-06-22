#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool checkprime(int suspect);

int main()
{
    int i=0,j=0;
    while(i<2400)
    {
        if(checkprime(i)) printf("%3d: %04d\n",j++,i);
        (i%100==59)?i+=41:i++;
    }
    printf("%d primetimes\n",j);
    return EXIT_SUCCESS;
}

bool checkprime(int suspect)
{
    if(suspect==0) return false;
    else if(suspect==1) return false;
    else if(suspect==2) return true;
    else if((suspect%2)==0) return false;
    else for(int i=3;i<=(int)sqrt(suspect);i+=2) if(checkprime(i) and suspect%i==0) return false;
    return true;
}
