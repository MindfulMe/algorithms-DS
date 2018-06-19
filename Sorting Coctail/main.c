//coctail
#include<stdio.h>
#include<conio.h>
#define MAX 10

int permutation_counter = 0;
int equal_counter = 0;

int main()
{
int a[MAX],b[MAX];
int n, i, j, pass, sw = 1,temp;
 printf("Enter the number of elements present.\n");
 scanf("%d",&n);
 printf("Enter the elements :\n");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
    b[i]=a[i];
 }
 printf("The array elements before sorting are\n");
 for(i=0;i<n;i++)
    printf("%d\t",a[i]);
 printf("\n");
 sw = 1;
 for(i = 0; i < n-1 && sw == 1; i++)
 {
     for(j=0;j<n;j++){
    printf("%d ",b[j]);
    }
    printf("\nCount of permutation %d", permutation_counter);
    printf("\nCount of equals %d\n", equal_counter);

    sw=0;
    for(j=0;j<n-1-i;j++)
    {
        equal_counter++;
        if(b[j]>b[j+1])
        {
         permutation_counter++;
         temp=b[j+1];
         b[j+1]=b[j];
         b[j]=temp;
         sw=1;
        }
        if(b[n-1-j]<b[n-2-j])
        {
         permutation_counter++;
         temp=b[n-2-j];
         b[n-2-j]=b[n-1-j];
         b[n-1-j]=temp;
         sw=1;
        }
    }


}
 for(j=0;j<n;j++)
    printf("%d ",b[j]);
 printf("\nCount of passes : %d\n",i);
 getch();
}
