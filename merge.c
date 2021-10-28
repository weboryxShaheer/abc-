#include<stdio.h>
#include<conio.h>
int
main () 
{
  
int arr1[10], arr2[10], size1, size2, i, k, merge[20];
  
printf ("Enter Size: ");
  
scanf ("%d", &size1);  
  
printf ("Enter Elements in the file to be added ");
  
for (i = 0; i < size1; i++)
    
    {
      
scanf ("%d", &arr1[i]);
      
merge[i] = arr1[i];
    
}
    
k = i;
  
printf ("\nEnter Size: ");
  
scanf ("%d", &size2);
  
printf ("Enter Elements ");
  
for (i = 0; i < size2; i++)
    
    {
      
scanf ("%d", &arr2[i]);
      
merge[k] = arr2[i];
      
k++;
    
}
  
printf ("\n after merging is );
    for(i=0; i<k; i++)
        printf(" % d ", merge[i]);
    getch();
    return 0;
}
//1234
//hello i push it on the gitHub