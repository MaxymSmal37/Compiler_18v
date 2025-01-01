#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int32_t _Aaaaaaaaaaaaa, _Bbbbbbbbbbbbb, _Ccccccccccccc;
   printf("Enter _Aaaaaaaaaaaaa:");
   scanf("%hd", &_Aaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbb:");
   scanf("%hd", &_Bbbbbbbbbbbbb);
   printf("Enter _Ccccccccccccc:");
   scanf("%hd", &_Ccccccccccccc);
   if ((_Aaaaaaaaaaaaa > _Bbbbbbbbbbbbb))
   {
   if ((_Aaaaaaaaaaaaa > _Ccccccccccccc))
   {
   goto _Temporallllll;
   }
   else
   {
   printf("%d\n", _Ccccccccccccc);
   goto _Outgotooooooo;
_Temporallllll:
   printf("%d\n", _Aaaaaaaaaaaaa);
   goto _Outgotooooooo;
   }
   }
   if ((_Bbbbbbbbbbbbb < _Ccccccccccccc))
   {
   printf("%d\n", _Ccccccccccccc);
   }
   else
   {
   printf("%d\n", _Bbbbbbbbbbbbb);
   }
_Outgotooooooo:
   if (((_Aaaaaaaaaaaaa == _Bbbbbbbbbbbbb) || (_Aaaaaaaaaaaaa == _Ccccccccccccc) && (_Bbbbbbbbbbbbb == _Ccccccccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_Aaaaaaaaaaaaa < 0) || (_Bbbbbbbbbbbbb < 0) || (_Ccccccccccccc < 0)))
   {
   printf("%d\n",  - 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_Aaaaaaaaaaaaa < (_Bbbbbbbbbbbbb + _Ccccccccccccc))))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
