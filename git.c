
#include <stdio.h>
int main(int argc, char const *argv[]) {
  printf("this is a test, does this work?\n");
  return 0;
}

int feature_A(int n){
  if(n == 0){
    return 1;
  } else {
    return 0;
  }
}


int feature_B(){
	return -42;
}

int feature_C(){
	return 42;
}
