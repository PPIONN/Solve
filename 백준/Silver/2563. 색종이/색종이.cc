#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[101][101];

    int a = 0;
    int x = 0;
    int y = 0;
    int sub = 0;
    cin >> a;

    for(int i =0; i < a; i++){
        cin >> x >> y;
          
        for(int k=0; k<10; k++){  
            for(int j=0; j<10; j++){
                if(arr[x+k][y+j] != 1){
                    arr[x+k][y+j] = 1;
                    ++sub;
                }
            }
        }
        
    }
    cout << sub;
    



    
    return 0;
}