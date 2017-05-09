#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int HexToInt( char* Hex )
{
  int nLen = strlen( Hex );
  int nDigitMult = 1;
  int nResult = 0;
  for( int i = nLen - 1; i >= 0; i-- )
  {
    char ch = Hex[ i ];
    if( '0' <= ch && ch <= '9' )
      nResult += (ch - '0') * nDigitMult;
    else if( 'a' <= ch && ch <= 'f' )
      nResult += (ch - 'a' + 10) * nDigitMult;
    else if( 'A' <= ch && ch <= 'F' )
      nResult += (ch - 'A' + 10) * nDigitMult;
    nDigitMult *= 16;
  }
  return nResult;
}

int main() {

    int jgc;
    jgc = HexToInt("5c 5d d5 b3 e7 bc c8 82 1b f5 ae 58 fb 47 8e 16");
    printf("%i\n", jgc);
}
