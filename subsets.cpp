using namespace std;
    struct Node
    {
        char *item;
        Node* next;
    };

void findSubsets(const int *arr, int n, int k, int *taken, const int step)
{
    if(k==0)
    {
        for(int j=0; j<n; j++)
            if(taken[j] == 1)
                cout << arr[j];
            cout << endl;
    }

    else if(step < n)
    {
        taken[step]=0;
        findSubsets(arr+1, n-1, k, taken, step+1);
        taken[step]=1;
        findSubsets(arr+1, n-1, k-1, taken, step+1);
    }

    // k!=0 ==> do nothing;
}



bool isPalindrome(char *str, int size)
{
    if(size <= 1)
        return true;
    if(str[0] == str[size-1])
        return isPalindrome(str+1, size-2);
    else
        return false;

}
