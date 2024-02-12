 #define EXPORT extern "C" __attribute__((visibility("default"))) __attribute__((used))

 EXPORT
 int addEverything(int a, int b){
   return a+b;
 }
