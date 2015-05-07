#include <iostream>
#include <time.h>

using namespace std;

static int counter;

void increment()
{
	// counter++;
}

int main()
{
    clock_t t1,t2;
	counter = 0;

    t1=clock();
    int M  = 1000000;
    int B  = 1000 * M;
    for(int i=0; i < 1 * B ; i++)
    {
    	for(int j = 0; j < 10 ; j++ )
    	{
			// increment();
    		// counter++;
    	}
    }	

    //code goes here
    t2=clock();
    float diff = ((float)t2-(float)t1);
    cout<<diff/CLOCKS_PER_SEC<<endl;
    return 0;
    

}



