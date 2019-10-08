#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int _=0; _<t; _++){
        int n,c;
        scanf("%d %d", &n, &c);
        int loc[n];
        for(int i=0; i<n; i++){
            scanf("%d", &loc[i]);
        }
        sort(loc, loc+n);

        int min_sep = 1000000000, n_left = n-1, prev_loc = loc[0], last_loc = loc[n-1], prev_i = 0, bs_l, bs_m, bs_r;

        while(n_left>0){
            float expected = ((float)  (last_loc - prev_loc)) / n_left;

            bs_l = prev_i;
            bs_r = n-1;
            bs_m = (bs_l + bs_r)/2;

            while(bs_m>bs_l){
                if(loc[bs_m]-prev_loc >= expected){
                    bs_r = bs_m;
                    bs_m = (bs_l + bs_r)/2;
                }
                else{
                    bs_l = bs_m;
                    bs_m = (bs_l + bs_r)/2;
                }
            }
            min_sep = min(min_sep, loc[bs_m]-prev_loc);
            n_left--;
            prev_i = bs_m;
            prev_loc = loc[prev_i];
        }
        printf("%d\n", min_sep);
    }
}