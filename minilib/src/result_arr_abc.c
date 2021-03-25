#include "../inc/minilibmx.h"

void result_arr_a(char op, int a, int count_c, int count_b) {
    int res_c, res_b;
    double pow_c = mx_pow_rec(10, count_c);
    double pow_b = mx_pow_rec(10, count_b);
    int sign_c = 1, sign_b = 1, sign_a = 1; 
    if (a < 0) {
        sign_a *= -1;
        a *= -1;
    }
    if (op == '+') {
        res_b = 0;
        res_c = 0;
        while (res_c < pow_c - 1 && res_b < pow_b) {
            res_c = mx_add(a, res_b);
            mx_printint(a * sign_a);
            mx_printstr(" + ");
            mx_printint(res_b);
            mx_printstr(" = ");
            mx_printint(res_c);
            mx_printchar('\n');
            res_b++;
        }
    }
    if (op == '-') {
        if (a < pow_b)
            res_c = a-1;
        else
            res_c = pow_c - 1;
       // res_b = 1;
        while (res_b <pow_b-1 && res_c >=0) {
            if ( sign_a == -1){res_b = mx_add(a, res_c); sign_b = -1;}
            else res_b = mx_sub (a, res_c);

            mx_printint(a * sign_a);
            mx_printstr(" - ");
            mx_printint(res_b);
            mx_printstr(" = ");
            mx_printint(res_c * sign_c);
            mx_printchar('\n');
            res_c--;
        }
    }
    if (op == '*') {
        res_b = 0;
        res_c = 0;
        if (sign_a < 0) sign_c = -1;
        while (res_b < pow_b) {
            res_c = mx_mul(a, res_b);
            if (res_c < pow_c) {
            mx_printint(a * sign_a);
            mx_printstr(" * ");
            mx_printint(res_b);
            mx_printstr(" = ");
            mx_printint(res_c * sign_c);
            mx_printchar('\n');
            }
            res_b++;
        }
    }
    if (op == '/') {
        res_b = 1;
        if (sign_a < 0) sign_c = -1;
        while (res_b < pow_b) {
            
            res_c = mx_div(a, res_b);
            if (res_c < pow_c) {
            mx_printint(a * sign_a);
            mx_printstr(" / ");
            mx_printint(res_b);
            mx_printstr(" = ");
            mx_printint(res_c * sign_c);
            mx_printchar('\n');
            }
            res_b++;
        }
    }
    if (op == '?') {
        res_b = 0 ;
        
        for ( ; res_b < pow_b; res_b++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                if (sign_a < 0) { if(res_b < a) sign_c = -1;
                    func_znak_sub(a, res_b, res_c, '+',sign_a,sign_b,sign_c); }
                else func_znak_add(a, res_b, res_c, '+',sign_a,sign_b,sign_c);
            }
        }
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                if ( sign_a == -1){sign_c = -1; func_znak_add(a, res_b, res_c, '-', sign_a,sign_b,sign_c);}
            else func_znak_sub(a, res_b, res_c, '-', sign_a,sign_b,sign_c);
            }
        }
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                func_znak_mul(a, res_b, res_c, '*',sign_a, sign_b, sign_c);
            }
        }
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                func_znak_div(a, res_b, res_c, '/', sign_a, sign_b, sign_c);
            }
        }
    }
}
    
void result_arr_b(char op, int b, int count_a, int count_c) {
    int res_c, res_a;
    double pow_c = mx_pow_rec(10, count_c);
    double pow_a = mx_pow_rec(10, count_a);
    int sign_c = 1, sign_b = 1, sign_a = 1; 
    if (b <  0) {
        sign_b *= -1;
        b *= -1;
    }
    if (op == '+') {
        res_a = 0;
        res_c = 0;
        while (res_c < pow_c - 1 && res_a < pow_a) {
            if(res_a < b) sign_c = -1;
            if (sign_b < 0) {res_c = mx_sub(b, res_a);}
            else { res_c = mx_add(res_a,b); sign_c = 1;} 
            mx_printint(res_a * sign_a);
            mx_printstr(" + ");
            mx_printint(b * sign_b);
            mx_printstr(" = ");
            mx_printint(res_c * sign_c);
            mx_printchar('\n');
            res_a++;
        }
    }
    if (op == '-') {
        if (b < pow_a)
            res_a = b;
        else
            res_a = pow_a - 1;
        res_c = 0;
        while (res_a < pow_a - 1 && res_c < pow_c - 1) {
            if (sign_b < 0) res_c = mx_add(res_a, b);
            else  res_c = mx_sub(res_a, b);
            mx_printint(res_a * sign_a);
            mx_printstr(" - ");
            mx_printint(b * sign_b);
            mx_printstr(" = ");
            mx_printint(res_c * sign_c);
            mx_printchar('\n');
            res_a++;
        }
    }
    if (op == '*') {
        res_a = 0;
        res_c = 0;
        if ( sign_b < 0) sign_c = -1;
        while (res_a < pow_a) {
            res_c = mx_mul(b, res_a);
            if (res_c <= pow_c - 1) {
            mx_printint(res_a *sign_a);
            mx_printstr(" * ");
            mx_printint(b * sign_b);
            mx_printstr(" = ");
            mx_printint(res_c * sign_c);
            mx_printchar('\n');
            }
            res_a++;
        }
    }
    if (op == '/') {
        res_a = 0;
        res_c = 0;
        if (sign_b < 0) sign_c = -1;
        while (res_a < pow_a - 1) {
            res_c = mx_div(res_a, b);
            if (res_c < pow_c - 1) {
                    mx_printint(res_a *sign_a);
                    mx_printstr(" / ");
                    mx_printint(b * sign_b);
                    mx_printstr(" = ");
                    mx_printint(res_c * sign_c);
                    mx_printchar('\n');
            }
            res_a++;
        }
    }
    if (op == '?') {
        res_a = 0 ;
        for ( ; res_a < pow_a; res_a++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                if(res_a < b) sign_c = -1;
                else sign_c = 1;
                if (sign_b < 0) {
                    func_znak_sub(res_a, b, res_c, '+', sign_a, sign_b, sign_c);
                } else  func_znak_add(res_a, b, res_c, '+', sign_a, sign_b, sign_c);
            }
        }
        res_a = 0 ;
        for ( ; res_a < pow_a; res_a++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                if (sign_b < 0) {
                    func_znak_add(res_a, b, res_c, '-', sign_a, sign_b, sign_c);
                }
                else {
                    if (res_a < b) sign_c = -1;
                    else sign_c = 1;
                    func_znak_sub(res_a, b, res_c, '-', sign_a, sign_b, sign_c);
                }
            }
        }
        res_a = 0 ;
        for ( ; res_a < pow_a; res_a++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                if (sign_b < 0) sign_c = -1;
                else sign_c = 1;
                func_znak_mul(res_a, b, res_c, '*', sign_a, sign_b, sign_c);
            }
        }
        res_a = 0 ;
        for ( ; res_a < pow_a; res_a++) {
            for (res_c = 0; res_c< pow_c; res_c++) {
                func_znak_div(res_a, b, res_c, '/', sign_a, sign_b, sign_c);
            }
        }
    }
}
void result_arr_c(char op, int c, int count_a, int count_b) {
    int res_b, res_a;
    double pow_b = mx_pow_rec(10, count_b);
    double pow_a = mx_pow_rec(10, count_a);
    int sign_c = 1, sign_b = 1, sign_a = 1; 
    if (c < 0) {
        sign_c *= -1;
        c *= -1;
    }
    if (op == '+') {
        res_a = 0;
        res_b = pow_b - 1;
        if (res_b > c) res_b = c;
        while (res_a < pow_a && res_b > 0){
            if(mx_add(res_a, res_b) == c) {             
                mx_printint(res_a);
                mx_printstr(" + ");
                mx_printint(res_b);
                mx_printstr(" = ");
                mx_printint(c);
                mx_printchar('\n');    
                res_b--;       
            }
            res_a++; 
        }
    }
    if (op == '-') {
       res_a = pow_a - 1;
       if (res_a > c) res_a = c;
        res_b = 0;
        while (res_a < pow_a && res_b < pow_b){
            if(mx_sub(res_a, res_b) == c) {
                mx_printint(res_a);
                mx_printstr(" - ");
                mx_printint(res_b);
                mx_printstr(" = ");
                mx_printint(c);
                mx_printchar('\n');
            }
            res_a++; res_b++;
        }
    }
    if (op == '*') {
        res_a = 0;
        res_b = pow_b - 1;
        if (res_b > c) res_b  = c;
        for( ; res_b > 0; res_b--){
            for(res_a = 0; res_a < pow_a; res_a++){
                if(mx_mul(res_a, res_b) == c) {
                    mx_printint(res_a);
                    mx_printstr(" * ");
                    mx_printint(res_b);
                    mx_printstr(" = ");
                    mx_printint(c);
                    mx_printchar('\n');
                }
            }
        }
    }
    if (op == '/') {
        res_a = 0;
        res_b = 1;
        for( ; res_b < pow_b; res_b++){
            for(res_a = 0; res_a < pow_a; res_a++){
                if(mx_div(res_a, res_b) == c) {
                    mx_printint(res_a);
                    mx_printstr(" / ");
                    mx_printint(res_b);
                    mx_printstr(" = ");
                    mx_printint(c);
                    mx_printchar('\n');
                }
            }
        }
    }
    if (op == '?') {
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_a = 0; res_a< pow_a; res_a++) {
                func_znak_add(res_a, res_b, c, '+', sign_a, sign_b, sign_c);
            }
        }
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_a = 0; res_a< pow_a; res_a++) {
               func_znak_sub(res_a, res_b, c, '-', sign_a, sign_b, sign_c);
            }
        }
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_a = 0; res_a< pow_a; res_a++) {
                func_znak_mul(res_a, res_b, c, '*', sign_a, sign_b, sign_c);
            }
        }
        res_b = 0 ;
        for ( ; res_b < pow_b; res_b++) {
            for (res_a = 0; res_a< pow_a; res_a++) {
                func_znak_div(res_a, res_b, c, '/', sign_a, sign_b, sign_c);
            }
        }
    }
}
void result_arr_abc(char op, int count_a, int count_b, int count_c){
     int res_b, res_a,res_c;
    double pow_b = mx_pow_rec(10, count_b);
    double pow_a = mx_pow_rec(10, count_a);
     double pow_c = mx_pow_rec(10, count_c);
    // int sign_c = 1, sign_b = 1, sign_a = 1; 

    if (op == '+') {
        res_a = 0;
        res_b=0;
        res_c=0;
       
        while (res_a < pow_a){
            res_b=0;
            res_c=0;
            for(;res_b<pow_b;res_b++){
                res_c=mx_add(res_a,res_b);
                if(res_c<pow_c){
                        mx_printint(res_a);
                        mx_printstr(" + ");
                        mx_printint(res_b);
                        mx_printstr(" = ");
                        mx_printint(res_c);
                        mx_printchar('\n');    
                }     
            }
            res_a++;
            
        }
    }
    if (op == '-') {
       res_a=0;
       res_b=0;
       res_c=0;
        while (res_a <pow_a){
            res_b=0;
            res_c=0;
            for(;res_b<pow_b;res_b++){
                res_c=mx_sub(res_a,res_b);
                if(res_c<pow_c&&res_c>=0){
                        mx_printint(res_a);
                        mx_printstr(" - ");
                        mx_printint(res_b);
                        mx_printstr(" = ");
                        mx_printint(res_c);
                        mx_printchar('\n');    
                }     
            }
            res_a++;
            
        }
    }
    if (op == '*') {
       res_a=0;
       res_b=0;
       res_c=0;
        while (res_a <pow_a){
            res_b=0;
            res_c=0;
            for(;res_b<pow_b;res_b++){
                res_c=mx_mul(res_a,res_b);
                if(res_c<pow_c&&res_c>=0){
                        mx_printint(res_a);
                        mx_printstr(" * ");
                        mx_printint(res_b);
                        mx_printstr(" = ");
                        mx_printint(res_c);
                        mx_printchar('\n');    
                }     
            }
            res_a++;
            
        }
    }
    if (op == '/') {
       res_a=0;
       res_b=1;
       res_c=0;
        while (res_a <pow_a){
            res_b=1;
            res_c=0;
            for(;res_b<pow_b;res_b++){
                res_c=mx_div(res_a,res_b);
                if(res_c<pow_c&&res_c>=0){
                        mx_printint(res_a);
                        mx_printstr(" / ");
                        mx_printint(res_b);
                        mx_printstr(" = ");
                        mx_printint(res_c);
                        mx_printchar('\n');    
                }     
            }
            res_a++;
            
        }
    }
}
