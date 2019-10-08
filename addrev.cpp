#include <stdio.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int x,y, rx = 0, ry = 0, rz, z=0;
        scanf("%d %d", &x, &y);
        while(x>0){
            rx = rx*10+x%10;
            x /= 10;
        }
        while(y>0){
            ry = ry*10+y%10;
            y /= 10;
        }
        rz = rx+ry;
        while(rz>0){
            z = z*10+rz%10;
            rz /= 10;
        }
        printf("%d\n", z);
    }
}