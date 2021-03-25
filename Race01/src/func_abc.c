#include "../inc/minilibmx.h"

void func_znak_add(int a, int b, int c, char op,int sign_a, int sign_b, int sign_c) {
        if (mx_add(a,b) == c) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_sub(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c) {
        if (mx_sub(a,b) == c) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_addstr(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c) {
        if (mx_sub(a,c) == b) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_substr(int a, int b, int c, char op,int sign_a, int sign_b, int sign_c) {
        if (mx_add(a,c) == b) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_addstr_c(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c) {
        if (mx_sub(a,b) == c) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_substr_c(int a, int b, int c, char op,int sign_a, int sign_b, int sign_c) {
        if (mx_sub(b,c) == a) {
             mx_printint(a*sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_mul(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c) {
        if (mx_mul(a,b) == c) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_znak_div(int a, int b, int c, char op,int sign_a, int sign_b, int sign_c) {
        if (b != 0 && mx_div(a,b) == c) {
             mx_printint(a * sign_a);
                mx_printchar(' ');
                mx_printchar(op);
                mx_printchar(' ');
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
        }
}
void func_a (char op, int c, int b, int count_a) {
    int res_a;
    double pow_a = mx_pow_rec(10, count_a);
    int sign_c = 1, sign_b = 1, sign_a = 1; 
    bool znak = true;
    if (c < 0) {
        sign_c *= -1;
        c *= -1;
        if (op == '*') { sign_a *= -1; }
        else if (op == '/') { sign_a *= -1; }
    }
    if (b < 0) {
        sign_b *= -1;
        b *= -1;
        if (op == '+'){ op = '-'; znak = false; }
        else if (op == '-') { op = '+'; znak = false; }
        else if (op == '*') { sign_a *= -1; }
        else if (op == '/') { sign_a *= -1; }
    }
    if (op == '+') {
        res_a = 0;
        while (res_a < pow_a){
            if(mx_add(res_a, b) == c) {
                mx_printint(sign_a * res_a);
                if (znak == true)
                mx_printstr(" + ");
                else mx_printstr(" - ");
                mx_printint(sign_b * b);
                mx_printstr(" = ");
                mx_printint(sign_c * c);
                mx_printchar('\n');
            }
            res_a++;
        }
    }
    if (op == '-') {
        res_a = 0;
        while (res_a < pow_a){
            if(mx_sub(res_a, b) == c) {
                mx_printint(sign_a * res_a);
                if (znak == true)
                mx_printstr(" - ");
                else mx_printstr(" + ");
                mx_printint(sign_b * b);
                mx_printstr(" = ");
                mx_printint(sign_c * c);
                mx_printchar('\n');
            }
            res_a++;
        }
    }
    if (op == '*') {
        res_a = 0;
        while (res_a < pow_a){
            if (mx_mul(res_a, b) == c) {
                mx_printint(sign_a * res_a);
                mx_printstr(" * ");
                mx_printint(sign_b * b);
                mx_printstr(" = ");
                mx_printint(sign_c * c);
                mx_printchar('\n');
            }
            res_a++;
        }
    }
    if (op == '/'){
        res_a = 0;
        while (res_a < pow_a){
            if (mx_div(res_a, b) == c) {
                mx_printint(sign_a * res_a);
                mx_printstr(" / ");
                mx_printint(sign_b * b);
                mx_printstr(" = ");
                mx_printint(sign_c * c);
                mx_printchar('\n');
            }
            res_a++;
        }
    }
    if (op == '?') {
        res_a = 0;
        //if (pow_a  - 1 + (sign_b * b) < sign_c * c )
        // while (res_a < pow_a){ 
            
        //     func_znak_add(res_a,b,c,'+', sign_a, sign_b, sign_c);
        //     res_a++;
        // }
        // res_a = 0;
        // //if (pow_a  - 1 - (sign_b * b) < sign_c * c )
        // while (res_a < pow_a){ 
        //     if (sign_b < 0) { op = '-';
        //     func_znak_add(res_a,b,c,'-', sign_a, sign_b, sign_c);
        //     }
        //     else func_znak_sub(res_a,b,c,'-', sign_a, sign_b, sign_c);
        //    res_a++;
        // }
        if(sign_b>0&&sign_c>0){
            while (res_a < pow_a){ 
            
            func_znak_add(res_a,b,c,'+', sign_a, sign_b, sign_c);
            res_a++;
        }
        res_a=0;
            while (res_a < pow_a){ 
            
            func_znak_sub(res_a,b,c,'-', sign_a, sign_b, sign_c);
            res_a++;
        }
        }
        if(sign_b<0&&sign_c>0){
            while (res_a < pow_a){ 
            
            func_znak_substr(res_a,b,c,'-', sign_a, sign_b, sign_c);
            res_a++;
        }
        res_a=0;
            while (res_a < pow_a){ 
            
            func_znak_addstr(res_a,b,c,'+', sign_a, sign_b, sign_c);
            res_a++;
        }
        }
         if(sign_b>0&&sign_c<0){
            while (res_a < pow_a){ 
            
            func_znak_substr_c(res_a,b,c,'-', sign_a, sign_b, sign_c);
            res_a++;
        }
        res_a=0;
            while (res_a < pow_a){ 
            
            func_znak_addstr_c(res_a,b,c,'+', -1, sign_b, sign_c);
            res_a++;
        }
        }
        res_a = 0;
        if( (sign_b < 0 && sign_c >0) || (sign_b >0 && sign_c < 0))
             sign_a *= -1;
        while (res_a < pow_a){ 
            
           func_znak_mul(res_a,b,c,'*', sign_a, sign_b, sign_c);
           res_a++;
        }
        res_a = 0;
        while (res_a < pow_a){ 
           func_znak_div(res_a,b,c,'/', sign_a, sign_b, sign_c);
           res_a++;
        }
    }
}

void func_b (char op, int a, int c, int count_b) {
    int res_b;
    double pow_b = mx_pow_rec(10, count_b);
    int sign_c = 1, sign_b = 1, sign_a = 1; 
    if (c < 0) {
        sign_c *= -1;
        c *= -1;
        if (op == '*') { sign_a *= -1; }
        else if (op == '/') { sign_a *= -1; }
    }
    if (a < 0) {
        sign_a *= -1;
        a *= -1;
        if (op == '*') { sign_b *= -1; }
        else if (op == '/') { sign_b *= -1; }
    }
    if (op == '+') {
        res_b = 0;
        while (res_b < pow_b){
            if(mx_add(a, res_b) == c) {
                mx_printint(a * sign_a);
                mx_printstr(" + ");
                mx_printint(res_b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
            }
            res_b++;
        }
    }
    if (op == '-') {
        res_b = 0;
        while (res_b < pow_b){
            if(mx_sub(a, res_b) == c) {
                mx_printint(a * sign_a );
                mx_printstr(" - ");
                mx_printint(res_b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
            }
            res_b++;
        }
    }
    if (op == '*') {
        res_b = 0;
        while (res_b < pow_b){
            if (mx_mul(a, res_b) == c) {
                mx_printint(a * sign_a);
                mx_printstr(" * ");
                mx_printint(res_b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
            }
            res_b++;
        }
    }
    if (op == '/'){
        res_b = 1;
        while (res_b < pow_b){
            if (mx_div(a, res_b) == c) {
                mx_printint(a * sign_a);
                mx_printstr(" / ");
                mx_printint(res_b * sign_b);
                mx_printstr(" = ");
                mx_printint(c * sign_c);
                mx_printchar('\n');
            }
            res_b++;
        }
    }
    if (op == '?') {
       res_b = 0;
       while (res_b < pow_b){
           if (a < 0 && c > 0){
                op = '-'; 
                func_znak_sub(a,res_b,c,op, sign_a, sign_b, sign_c);
           }
           else {
               op = '+';
               func_znak_add(a,res_b,c,op, sign_a, sign_b, sign_c);
           }
          
           res_b++;
       }
       res_b = 0;
       while (res_b < pow_b){ 
           if (a < 0 && c > 0){
                op = '+';
                
                func_znak_add(a,res_b,c,op, sign_a, sign_b, sign_c);
           }
           else{ op = '-';
           func_znak_substr(a,res_b,c,op, sign_a, sign_b, sign_c);
           }
           res_b++;
       }
       res_b = 0;
       if (sign_a < 0 && sign_c > 0) sign_b *= -1;
       while (res_b < pow_b){
           func_znak_mul(a,res_b,c,'*', sign_a, sign_b, sign_c);
           res_b++;
       }
       res_b = 0;
       while (res_b < pow_b){
           func_znak_div(a,res_b,c,'/', sign_a, sign_b, sign_c);
           res_b++;
       }
    }
}
void func_c (char op, int a, int b, int count_c) {
    int res_c;
    double pow_c = mx_pow_rec(10, count_c);
    int sign_c = 1, sign_b = 1, sign_a = 1; 
    bool znak = true;
    if (a < 0) {
        sign_a *= -1;
        a *= -1;
        
        if (op == '*') { sign_b *= -1; }
        else if (op == '/') { sign_b *= -1; }
    }
    if (b < 0) {
        sign_b *= -1;
        b *= -1;
        if (op == '+'){ op = '-'; znak = false; }
        else if (op == '-') { op = '+'; znak = false; }
        else if (op == '*') { sign_c *= -1; }
        else if (op == '/') { sign_c *= -1; }
    }
    if (op == '+') {
        res_c = 0;
        while (res_c < pow_c){
            if(mx_add(a,b) == res_c) {
                mx_printint(sign_a * a);
                if (znak == true)
                mx_printstr(" + ");
                else mx_printstr(" - ");
                mx_printint(sign_b * b);
                mx_printstr(" = ");
                mx_printint(sign_c * res_c);
                mx_printchar('\n');
            }
            res_c++;
        }
    }
    if (op == '-') {
        res_c = 0;
        while (res_c < pow_c){
            if(mx_sub(a,b) == res_c) {
                mx_printint(sign_a * a);
                if (znak == true)
                mx_printstr(" - ");
                else mx_printstr(" + ");
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(res_c * sign_c);
                mx_printchar('\n');
            }
            res_c++;
        }
    }
    if (op == '*') {
        res_c = 0;
        while (res_c < pow_c){              
            if (mx_mul(a,b) == res_c) {
                mx_printint(a * sign_a);
                mx_printstr(" * ");
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(res_c * sign_c);
                mx_printchar('\n');
            }
            res_c++;
        }
    }
    if (op == '/'){
        res_c = 0;
        while (res_c < pow_c){
            if (mx_div(a,b) == res_c) {
                mx_printint(a *sign_a);
                mx_printstr(" / ");
                mx_printint(b * sign_b);
                mx_printstr(" = ");
                mx_printint(res_c * sign_c);
                mx_printchar('\n');
            }
            res_c++;
        }
    }
    if (op == '?') {
        res_c = 0;
       while (res_c < pow_c){
           if (sign_b < 0) func_znak_sub(a,b,res_c,'+', sign_a, sign_b, sign_c);
           else func_znak_add(a,b,res_c,'+', sign_a, sign_b, sign_c);
           res_c++;
       }
       res_c = 0;
       
       while (res_c < pow_c){
           if(sign_b < 0)
           func_znak_add(a,b,res_c,'-', sign_a,sign_b, sign_c);
           else func_znak_sub(a,b,res_c,'-', sign_a,sign_b, sign_c);
           res_c++;
       }
       res_c = 0;
       if ((sign_a > 0 && sign_b < 0) || (sign_b > 0 && sign_a <0)) sign_c *=-1;
       while (res_c < pow_c){
           func_znak_mul(a,b,res_c,'*', sign_a,sign_b, sign_c);
           res_c++;
       }
       res_c = 0;
       while (res_c < pow_c){
           func_znak_div(a,b,res_c,'/', sign_a,sign_b, sign_c);
           res_c++;
       }
    }
}
