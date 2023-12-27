#include <math.h>
 
char robot_move(int xs[], int ys[], int num_points, double area_radius, int xt, int yt){
    for (int i = 0; i < num_points; i++){
        if (sqrt(pow(fabs(xs[i] - xt), 2) + pow(fabs(ys[i] - yt), 2)) <= area_radius)
            return 1;
        }
    
    for (int i = 1; i < num_points; i++){
        for (int k = 1; k < i; k++){
            int a = fabs(xs[i] - xs[i - k]);
            int b = fabs(ys[i] - ys[i - k]);
            
            if (a == 0){
                for (int j = 1; j < b; j++){
                    if (sqrt(pow(fabs(xs[i] - xt), 2) + pow(fabs(fmin(ys[i], ys[i - k]) + j - yt), 2)) <= area_radius)
                        return 1;
                }
            }
            if (b == 0){
                for (int j = 1; j < b; j++){
                    if (sqrt(pow(fabs(fmin(xs[i], xs[i - k]) + j - xt), 2) + pow(fabs(ys[i] - yt), 2)) <= area_radius)
                        return 1;
                }
            }
            if ((a != 0) && (b != 0))
                for (int j = 1; j < a; j++){
                    if ((xs[i] < xs[i - k]) && (ys[i] < ys[i - k])){
                        int new_ty = ys[i] + j;
                        int new_tx = xs[i] + j;
                        if (sqrt(pow(fabs(new_tx - xt), 2) + pow(fabs(new_ty - yt), 2)) <= area_radius)
                        return 1;
                        }
                    if ((xs[i] > xs[i - k]) && (ys[i] < ys[i - k])){
                        int new_ty = ys[i] + j;
                        int new_tx = xs[i] - j;
                        if (sqrt(pow(fabs(new_tx - xt), 2) + pow(fabs(new_ty - yt), 2)) <= area_radius)
                        return 1;
                        }
                    if ((xs[i] < xs[i - k]) && (ys[i] > ys[i - k])){
                        int new_ty = ys[i] - j;
                        int new_tx = xs[i] + j;
                        if (sqrt(pow(fabs(new_tx - xt), 2) + pow(fabs(new_ty - yt), 2)) <= area_radius)
                        return 1;
                        }
                    if ((xs[i] > xs[i - k]) && (ys[i] > ys[i - k])){
                        int new_ty = ys[i] - j;
                        int new_tx = xs[i] - j;
                        if (sqrt(pow(fabs(new_tx - xt), 2) + pow(fabs(new_ty - yt), 2)) <= area_radius)
                        return 1;
                        }
                }
        }
    }
    return 0;
}