#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
bool randomBool() {
  return rand() % 2 == 1;
}

int main ()
{
 /* initialize random seed: */
  srand ( time(NULL) );
while(true){cout<<randomBool()<<endl; }
/* fill up your game board here */

}
