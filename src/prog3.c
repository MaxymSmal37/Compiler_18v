#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int32_t _Aaaaaaaaaaaaa, _Aaaaaaaaaaaa2, _Bbbbbbbbbbbbb, _Xxxxxxxxxxxxx, _Ccccccccccccc, _Cccccccccccca;
   printf("Enter _Aaaaaaaaaaaaa:");
   scanf("%hd", &_Aaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbb:");
   scanf("%hd", &_Bbbbbbbbbbbbb);
   for (int16_t _Aaaaaaaaaaaa2 = _Aaaaaaaaaaaaa; _Aaaaaaaaaaaa2 <= _Bbbbbbbbbbbbb; _Aaaaaaaaaaaa2++)
   {
   printf("%d\n", (_Aaaaaaaaaaaa2 * _Aaaaaaaaaaaa2));
   }
   for (int16_t _Aaaaaaaaaaaa2 = _Bbbbbbbbbbbbb; _Aaaaaaaaaaaa2 <= _Aaaaaaaaaaaaa; _Aaaaaaaaaaaa2++)
   {
   printf("%d\n", (_Aaaaaaaaaaaa2 * _Aaaaaaaaaaaa2));
   }
   _Xxxxxxxxxxxxx = 0;
   _Ccccccccccccc = 0;
   while (_Ccccccccccccc < _Aaaaaaaaaaaaa)
   {
   {
   _Cccccccccccca = 0;
   while (_Cccccccccccca < _Bbbbbbbbbbbbb)
   {
   {
   _Xxxxxxxxxxxxx = _Xxxxxxxxxxxxx + 1;
   _Cccccccccccca = _Cccccccccccca + 1;
   }
   }
   _Ccccccccccccc = _Ccccccccccccc + 1;
   }
   }
   printf("%d\n", _Xxxxxxxxxxxxx);
   _Xxxxxxxxxxxxx = 0;
   _Ccccccccccccc = 1;
   do
   {
   _Cccccccccccca = 1;
   do
   {
   _Xxxxxxxxxxxxx = _Xxxxxxxxxxxxx + 1;
   _Cccccccccccca = _Cccccccccccca + 1;
   }
   while ((!(_Cccccccccccca > _Bbbbbbbbbbbbb)));
   _Ccccccccccccc = _Ccccccccccccc + 1;
   }
   while ((!(_Ccccccccccccc > _Aaaaaaaaaaaaa)));
   printf("%d\n", _Xxxxxxxxxxxxx);
   system("pause");
    return 0;
}
