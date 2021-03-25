int mx_count_words(const char* str, char delimiter)
{
 int state = 0;  
 unsigned wc = 0;
 int ch = 0;
 while (*str){  
  if (*str == delimiter && ch == 0) {
   ch = 1; 
   }
  if (*str == delimiter || *str == '\n' || *str == '\t')  
   state = 0;
  else if (state == 0){  
   state = 1;
   ++wc;
  }
  ++str; 
 }
 if(ch > 0)
  return wc;  
 return 0;  
}

