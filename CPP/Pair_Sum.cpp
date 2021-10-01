#include <iostream>
using namespace std;

void pairSum(int input[], int size, int x) {
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            if(i!=j){
                if((input[i] + input[j]) == x){
                    if(input[i] < input[j]){
                        cout << input[i]<<" and "<< input[j] << endl;
                       
                    }
                    else{
                        cout << input[j]<<" and "<< input[i] << endl;
                    }
                }
            }
        }
    }
}
int main()
{
    int size, x, input[20];
    cin >> size;
    for (int j = 0; j <= size - 1; j++)
    {
        cin >> input[j];
    }
    cin >> x;
    pairSum(input, size, x);
    return 0;
}
