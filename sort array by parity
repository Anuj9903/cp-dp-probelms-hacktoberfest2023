class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int i=0,j=a.size()-1,k,c=0;

        while(i<j){
            if(a[i]%2==1 and a[j]%2==0){
                swap(a[i],a[j]);
                i++;
                j--;
            } else if(a[i]%2==0)
            i++; 
            else
            j--;
        }

        return a;
    }
};
