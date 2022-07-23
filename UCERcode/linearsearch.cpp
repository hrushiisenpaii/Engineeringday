
#include <stdio.h> 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
// Driver code 
int main(void) 
{ 
    int n,x,arr[100];
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\nENter no.:");
        scanf("%d",&x);
    
    // Function call 
    int result = search(arr, n, x); 
    (result == -1) 
        ? printf("Element is not present in array") 
        : printf("Element is present at index %d", result); 
    return 0; 
}