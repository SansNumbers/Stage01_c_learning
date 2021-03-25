int mx_strncmp(const char* s1, const char* s2, int n){
 for (int i = 0; i < n; i++){
  if(s1[i] != s2[i]){
   if((int)s1[i] > (int)s2[i]){
    return 1;
   }
   else{
    return -1;
   }
  }
 }
 return 0;
}

