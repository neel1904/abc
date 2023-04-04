int LinearSearch(int arr[], int n, int key)
{
    if(n==0)
    {
        return -1;
    }
    else{

        for(int i=0 ; i<n ; i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
    }

    return -1;
    }
}

int BinarySearch(int arr[], int key, int s, int e)
{
    if(n==0)
    {
        return -1;
    }
    else
    {
        int mid= s + (e-s)/2;
        while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else{
            if(key>arr[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        mid= s + (e-s)/2;
        }
    }
    return -1;
}
//bhcdkjwdhjfkherlkjfilerhjghekrhkhgtuiery
//first and last occurance of an element in an array
int FirstOccurance(int arr[],int n, int key)
{
    int s=0, e=(n-1);
    int mid= s+ (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        elseif(arr[mid]>key){

        }
        elseif(arr[mid]<key){
            
        }
        mid= s+ (e-s)/2;
    }
    return -1;
}