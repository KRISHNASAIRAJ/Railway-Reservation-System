 #include <stdio.h>
int main()
{
 int Size, i, ar[10];
 int even = 0, odd = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the  Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &ar[i]);
 }
 for(i = 0; i < Size; i ++)
 {
   if(ar[i] % 2 == 0)
   {
 	even = even + ar[i];
   }
   else
   {
 	odd = odd + ar[i];
   }
 }
 printf("\n The Sum of Even Numbers  = %d ", even);
 printf("\n The Sum of Odd Numbers  = %d ", odd);
 return 0;
}