// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0) c0++;
        else if(a[i] == 1) c1++;
        else if(a[i] == 2) c2++;
    }
    for(int i=0; i<n; i++)
    {
        if(i<c0)
        a[i] = 0;
        else if(i<c0+c1)
        {
            a[i] = 1;
            
        }
        else if(i< c0+c1+c2)
        a[i] =2;
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends