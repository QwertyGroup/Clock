#include <iostream>
#include "windows.h"

using namespace std;

void time();
void test();

int main()
{
      //time();
      test();
      return 0;
}

void time()
{
      int h = 0;
      int m = 0;
      int s = 0;
      int ms = 0;

      for (int i = 0; i < 200; i++)
      {
          cout << h << ':' << m << ':' << s << ':' << ms <<endl;
          ms++;
          Sleep(100);

      }
}

void test()
{
    cout << "123\n456\n789";
}
