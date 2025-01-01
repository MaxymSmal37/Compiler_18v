#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaaaaaaaa;
   int _Bbbbbbbbbbbbb;
   int _Ccccccccccccc;
   printf("Enter _Aaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbb);
   printf("Enter _Ccccccccccccc:");
   scanf("%d", &_Ccccccccccccc);
   if (_Aaaaaaaaaaaaa ge _Bbbbbbbbbbbbb) 
   {
   if (_Aaaaaaaaaaaaa ge _Ccccccccccccc) 
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
   if (_Bbbbbbbbbbbbb le _Ccccccccccccc) 
   {
   printf("%d\n", _Ccccccccccccc);
   }
   else
   {
   printf("%d\n", _Bbbbbbbbbbbbb);
   }
_Outgotooooooo:
   if ((_Aaaaaaaaaaaaa eq _Bbbbbbbbbbbbb || (_Aaaaaaaaaaaaa eq _Ccccccccccccc && _Bbbbbbbbbbbbb eq _Ccccccccccccc))) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_Aaaaaaaaaaaaa le 0 || _Bbbbbbbbbbbbb le 0) || _Ccccccccccccc le 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_Aaaaaaaaaaaaa le (_Bbbbbbbbbbbbb + _Ccccccccccccc))) 
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
