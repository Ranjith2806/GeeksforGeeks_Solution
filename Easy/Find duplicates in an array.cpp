class Solution{
  
public:

    vector<int> duplicates(int arr[], int n) {

        // code here

        vector<int> a;

        sort(arr,arr+n);

        for(int i=0;i<n-1;i++){

            if(arr[i]==arr[i+1]){

                a.push_back(arr[i]);

            }

        }

        if(a.size()==0){

            a.push_back(-1);

            return a;

        }

        else{

            a.erase(unique(a.begin(),a.end()),a.end());
            }// use to remove duplicate elements

        return a;

        }

    };
