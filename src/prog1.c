#include <stdio.h>

#include <stdlib.h>

int main() 
{
;
   _Aaaaaaaaaaaaa = _Bbbbbbbbbbbbb;
   _Xxxxxxxxxxxxx = _Yyyyyyyyyyyyy;
   printf("Enter _Aaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaa + _Bbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaa - _Bbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaa * _Bbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaa / _Bbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaa % _Bbbbbbbbbbbbb);
   _Xxxxxxxxxxxxx = (_Aaaaaaaaaaaaa - _Bbbbbbbbbbbbb) * 10 + (_Aaaaaaaaaaaaa + _Bbbbbbbbbbbbb) / 10;
   _Yyyyyyyyyyyyy = _Xxxxxxxxxxxxx + (_Xxxxxxxxxxxxx % 10);
   printf("%d\n", _Xxxxxxxxxxxxx);
   printf("%d\n", _Yyyyyyyyyyyyy);
   system("pause");
    return 0;
}
