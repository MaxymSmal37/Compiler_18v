#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaaaaaaaa;
   int _Aaaaaaaaaaaa2;
   int _Bbbbbbbbbbbbb;
   int _Xxxxxxxxxxxxx;
   int _Ccccccccccccc;
   int _Cccccccccccca;
   printf("Enter _Aaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbb);
   for (int _Aaaaaaaaaaaa2 = _Aaaaaaaaaaaaa; _Aaaaaaaaaaaa2 <= _Bbbbbbbbbbbbb; _Aaaaaaaaaaaa2++)
   {
   printf("%d\n", (_Aaaaaaaaaaaa2 * _Aaaaaaaaaaaa2));
   }
   for (int _Aaaaaaaaaaaa2 = _Bbbbbbbbbbbbb; _Aaaaaaaaaaaa2 <= _Aaaaaaaaaaaaa; _Aaaaaaaaaaaa2++)
   {
   printf("%d\n", (_Aaaaaaaaaaaa2 * _Aaaaaaaaaaaa2));
   }
   _Xxxxxxxxxxxxx = 0;
   _Ccccccccccccc = 0;
   while (_Ccccccccccccc le _Aaaaaaaaaaaaa)
   {
   {
   _Cccccccccccca = 0;
   while (_Cccccccccccca le _Bbbbbbbbbbbbb)
   {
   {
   _Xxxxxxxxxxxxx = (_Xxxxxxxxxxxxx + 1);
   _Cccccccccccca = (_Cccccccccccca + 1);
   }
   }
   _Ccccccccccccc = (_Ccccccccccccc + 1);
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
   _Xxxxxxxxxxxxx = (_Xxxxxxxxxxxxx + 1);
   _Cccccccccccca = (_Cccccccccccca + 1);
   }
   while (!(_Cccccccccccca ge _Bbbbbbbbbbbbb));
   _Ccccccccccccc = (_Ccccccccccccc + 1);
   }
   while (!(_Ccccccccccccc ge _Aaaaaaaaaaaaa));
   printf("%d\n", _Xxxxxxxxxxxxx);
   system("pause");
    return 0;
}
