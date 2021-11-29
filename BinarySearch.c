// To perform binary search

#include <Stdio.h>
void sort(int a[],int n){
    int i=1;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
            for(i=1;i<n;i++){
                if(a[i-1]>a[i]){
                    a[i-1]=a[i-1]-a[i];
                    a[i]=a[i-1]+a[i];
                    a[i-1]=a[i]-a[i-1];
                }
            }
        } 
        else{
            continue;
        } 
    }
}
void main(){
    char c='y';
    do{
        int a[60],n,i,b,high,mid,low,flag=0;
        printf("\n\n~~~~~~~~~~~ B I N A R Y   S E A R C H ~~~~~~~~~~\n\n");
        printf("\n# inputing .............\n\n");
        printf("enter the length of the array::");
        scanf("%d",&n);
        printf("enter the elements into array:\n");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("THE ARRAY\n  [");
        for(i=0;i<n;i++){
            printf(" %d,",a[i]);
        }
        printf("]");
        printf("\nTHE SORTED ARRAY\n  [");
        for(i=n;i>0;i--){
            sort(a,n);
        }
        for(i=0;i<n;i++){
            printf(" %d,",a[i]);
        }
        printf("]\n\n\n\n# binary search starting ..............\n\n");
        printf("enter the element to be searched::");
        scanf("%d",&b);
        low=0;
        high=n-1;
        printf("\n~~~~~~~~~~~~~~ Output ...............\n");
        while (low<=high){
            mid=(int)(low+high)/2;
            if(b>a[mid]){
                low=mid+1;
            }
            else if (b<a[mid]){
                high=mid-1;
            }
            else{
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf("\n  element not found");
        }
        else{
                printf("\n  element ,%d, found at %d th position",b,mid+1);
        }
        printf("\n\n\nDo you want to continue:");
        scanf("%s",&c);
    }while(c=='y');       

}
