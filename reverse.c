
#include <stdio.h>

int
main ()
{
  int n;
  printf ("enter siz of array");
  scanf ("%d", &n);
  int arr[n];
  int i;
  for (i = 0; i <= n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  printf ("inverted array is");
  for (i = n; i >= 0; i--)
    {
      printf ("\t%d", arr[i]);
    }

  return 0;
}
hello i fucking pushed it by using windows app
