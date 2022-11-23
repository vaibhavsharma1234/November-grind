class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxl=arr[0];
	    long long maxr=arr[0];
	    int flag =0;
	    long long prod=1;
	    for(auto i:arr){
	        prod*=i;
	        if(i==0){
	            flag=1;
	            prod=1;
	            continue;
	        }
	        maxl=max(maxl,prod);
	    }
	    
	    prod=1;
	    for(int i=n-1;i>=0;i--){
	        prod*=arr[i];
	        if(arr[i]==0){
	            flag=1;
	            prod=1;
	            continue;
	        }
	        maxl=max(maxl,prod);
	    }
	    if(flag==1){
	        return max(max(maxl,maxr),0LL);
	    }
	    return max(maxl,maxr);
	}
};