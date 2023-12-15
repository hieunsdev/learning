#include <stdio.h>
#define PRINT(X) printf(#X " check age = %d\r\n", X);

// BUG:  : check
// NOTE: : check
// QUES: : check
//       : check
int main()
{
    int Hieu = 22;
    PRINT(Hieu);
    return 0;
}